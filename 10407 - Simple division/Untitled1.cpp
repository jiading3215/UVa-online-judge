#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    while (1) {
        int num[1000], res, remain, arr_size = 1;
        bool flag = 1;
        cin >> num[0];
        if (num[0] == 0)
            break;
        for (int i = 1; i < 1000; i++) {
            cin >> n;
            if (n != 0) {
                num[i] = n;
                arr_size++;
            }
            else
                break;
        }
        sort(num, num + arr_size);
        int fix[999];
        for (int i = 1; i < arr_size; i++) {
            fix[i - 1] = num[i] - num[i - 1];
        }
        sort(fix, fix + arr_size - 1);
        for (res = fix[arr_size - 2]; res != 0 && flag; res--) {
            for (int i = 0; i < arr_size - 1; i++) {
                if (fix[i] % res != 0)
                    break;
                if (i == arr_size - 2) {
                    cout << res << endl;
                    flag = 0;
                }
            }
        }
    }
    return 0;
}
