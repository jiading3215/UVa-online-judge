#include <iostream>
using namespace std;

int main() {
    int num[5001][2001] = {0}, i, j, in, flag = 1;
    num[1][0] = 1;
    for (i = 2; i < 5001; i++) {
        for (j = 0; j < flag; j++) {
            num[i][j] += num[i-1][j] + num[i-2][j];
            if (num[i][j] > 9) {
                num[i][j] %= 10;
                num[i][j + 1]++;
            }
        }
        if (num[i][flag] != 0)
            flag++;
    }
    while (cin >> in) {
        cout << "The Fibonacci number for " << in << " is ";
        if (in != 0) {
            for (j = flag; num[in][j] == 0; j--);
            for (; j >= 0; j--)
                cout << num[in][j];
        }
        else
            cout << 0;
        cout << endl;
    }
    return 0;
}
