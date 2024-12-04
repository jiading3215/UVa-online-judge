#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int in, i;
    while (1) {
        cin >> in;
        if (in == 0)
            break;
        int num[5000] = {0}, cost[5000] = {0}, total = 0;
        for (i = 0; i < in; i++)
            cin >> num[i];
        sort(num, num + in);
        for (i = 1; i < in; i++) {
            num[i] += num[i - 1];
            total += num[i];
            sort(num + i, num + in);
        }
        cout << total << endl;
    }
    return 0;
}
