#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main() {
    int num[64000] = {0}, in, cas, flag, i;
    num[1] = 1;
    for (i = 2; i < 64000; i++)
        num[i] = num[i - 1] + i;
    cin >> cas;
    while (cas--) {
        cin >> in;
        if (in == 0) {
            cout << 3 << endl << endl;
            continue;
        }
        in = abs(in);
        flag = in % 2;
        for (i = sqrt(in); 1; i++) {
            if (num[i] >= in && num[i] % 2 == flag) {
                cout << i << endl;
                break;
            }
        }
        if (cas != 0)
            cout << endl;
    }
    return 0;
}
