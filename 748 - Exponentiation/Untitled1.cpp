#include <iostream>
using namespace std;

int main() {
    int n;
    char in[7];
    while (cin >> in >> n) {
        bool com = 0;
        int i, j, dot, rev[5], res[150] = {0}, temp[150] = {0}, flag = 4, gin;
        for (dot = 0; in[dot] != '.'; dot++);
        for (i = dot; i < 5; i++)
            in[i] = in[i + 1];
        in[i] = '\0';
        for (i = 0; i < 5; i++)
            rev[i] = in[4 - i] - '0';
        dot = (5 - dot) * n;
        for (i = 0; i < 5; i++)
            temp[i] = rev[i];
        while (--n) {
            for (i = 0; i < 5; i++) {
                for (j = 0; j <= flag; j++) {
                    res[i + j] += rev[i] * temp[j];
                }
            }
            for (i = 0; i < 150; i++)
                temp[i] = 0;
            for (flag = 149; res[flag] == 0; flag--);
            for (i = 0; i <= flag; i++) {
                int num;
                gin = 0;
                for (num = res[i]; num != 0; num /= 10) {
                    temp[i + gin] += num % 10;
                    gin++;
                }
            }
            flag += gin - 1;
            for (i = 0; i <= flag; i++) {
                int num;
                if (temp[i] > 9) {
                    num = temp[i];
                    temp[i] = num % 10;
                    temp[i + 1] += num / 10;
                    if (flag == i)
                        flag++;
                }
            }
            for (i = 0; i < 150; i++)
                res[i] = 0;
        }
        for (i = 149; temp[i] == 0; i--);
        for (j = 0; temp[j] == 0; j++);
        if (j < dot && i >= dot) {
            for (; i >= j; i--) {
                if (i != dot)
                    cout << temp[i];
                else
                    cout << temp[i] << ".";
            }
        }
        else if (i < dot) {
            cout << ".";
            for (i = dot - 1; i >= j; i--)
                cout << temp[i];
        }
        else if (j >= dot) {
            for (j = dot; i >= j; i--)
                cout << temp[i];
        }
        cout << endl;
    }
    return 0;
}
