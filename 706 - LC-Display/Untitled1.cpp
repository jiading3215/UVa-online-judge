#include <iostream>
#include <cstring>
#include <cstdio>
#include <string>
using namespace std;

int main() {
    int s, len, i, j, k, real_num;
    char in[9], temp;
    bool num[10][7] = {
        {1, 1, 1, 0, 1, 1, 1},
        {0, 0, 1, 0, 0, 1, 0},
        {1, 0, 1, 1, 1, 0, 1},
        {1, 0, 1, 1, 0, 1, 1},
        {0, 1, 1, 1, 0, 1, 0},
        {1, 1, 0, 1, 0, 1, 1},
        {1, 1, 0, 1, 1, 1, 1},
        {1, 0, 1, 0, 0, 1, 0},
        {1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 0, 1, 1}
    };
    while (cin >> s) {
        getchar();
        scanf("%s", in);
        if (s == 0 && in[0] == '0')
            break;
        len = strlen(in);
        for (i = 0; i < len; i++) {
            cout << ' ';
            real_num = in[i] - '0';
            if (num[real_num][0])
                temp = '-';
            else
                temp = ' ';
            for (j = 0; j < s; j++)
                cout << temp;
            cout << ' ';
            if (i != len - 1)
                cout << ' ';
        }
        cout << endl;

        for (i = 0; i < s; i++) {
            for (j = 0; j < len; j++) {
                real_num = in[j] - '0';
                if (num[real_num][1])
                    cout << '|';
                else
                    cout << ' ';
                for (k = 0; k < s; k++)
                    cout << ' ';
                if (num[real_num][2])
                    cout << '|';
                else
                    cout << ' ';
                if (j != len - 1)
                    cout << ' ';
            }
            cout << endl;
        }

        for (i = 0; i < len; i++) {
            cout << ' ';
            real_num = in[i] - '0';
            if (num[real_num][3])
                temp = '-';
            else
                temp = ' ';
            for (j = 0; j < s; j++)
                cout << temp;
            cout << ' ';
            if (i != len - 1)
                cout << ' ';
        }
        cout << endl;

        for (i = 0; i < s; i++) {
            for (j = 0; j < len; j++) {
                real_num = in[j] - '0';
                if (num[real_num][4])
                    cout << '|';
                else
                    cout << ' ';
                for (k = 0; k < s; k++)
                    cout << ' ';
                if (num[real_num][5])
                    cout << '|';
                else
                    cout << ' ';
                if (j != len - 1)
                    cout << ' ';
            }
            cout << endl;
        }

        for (i = 0; i < len; i++) {
            cout << ' ';
            real_num = in[i] - '0';
            if (num[real_num][6])
                temp = '-';
            else
                temp = ' ';
            for (j = 0; j < s; j++)
                cout << temp;
            cout << ' ';
            if (i != len - 1)
                cout << ' ';
        }
        cout << endl << endl;

    }
    return 0;
}
