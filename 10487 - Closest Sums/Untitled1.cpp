#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int n, m, i, j, cas = 1;
    while (cin >> n) {
        if (n == 0)
            break;
        int num[1000], q;
        for (i = 0; i < n; i++)
            cin >> num[i];
        cin >> m;
        cout << "Case " << cas << ":" << endl;
        while (m--) {
            int closest = num[0] + num[1];
            cin >> q;
            for (i = 0; i < n; i++)
                for (j = 0; j < n; j++) {
                    if (i != j) {
                        if (abs(q - closest) > abs(num[i] + num[j] - q))
                            closest = num[i] + num[j];
                    }
                    else
                        continue;
                }
            cout << "Closest sum to " << q << " is " << closest << "." << endl;
        }
        cas++;
    }
    return 0;
}
