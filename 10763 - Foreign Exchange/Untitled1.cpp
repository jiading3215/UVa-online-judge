#include <iostream>
using namespace std;

int main() {
    int n, out, in, i;
    while (cin >> n, n != 0) {
        bool flag = 1;
        short int tab[10000] = {0};
        while (n--) {
            cin >> out >> in;
            tab[out]--;
            tab[in]++;
        }
        for (i = 0; i < 10000; i++) {
            if (tab[i] != 0) {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
