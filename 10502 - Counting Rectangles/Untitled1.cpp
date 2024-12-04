#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int r, c;
    bool t[100][100];
    while (1) {
        int cnt = 0;
        char ch;
        cin >> r;
        if (r == 0)
            break;
        cin >> c;
        if (c == 0)
            break;
        getchar();
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                ch = getchar();
                ch == '1' ? t[i][j] = 1 : t[i][j] = 0;
            }
            getchar();
        }
        for (int i = 1; i <= r; i++) {
            for (int j = 1; j <= c; j++) {
                for (int k = 0; k <= r - i; k++) {
                    for (int l = 0; l <= c - j; l++) {
                        bool flag = 1;
                        for (int a = 0; a < i && flag; a++) {
                            for (int b = 0; b < j && flag; b++) {
                                if (t[k + a][l + b] == 0)
                                    flag = 0;
                            }
                        }
                        if (flag)
                            cnt++;
                    }
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
