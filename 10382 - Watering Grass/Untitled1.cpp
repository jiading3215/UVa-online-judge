#include <iostream>
#include <cmath>
#include <map>
using namespace std;

int main() {
    int n, p;
    double l, w, r, gap;
    while (cin >> n >> l >> w) {
        int cnt = 0;
        double dy_lb = 0, dy_ub = 0;
        multimap<double, double> bound;
        multimap<double, double>::iterator iter;
        while (n--) {
            cin >> p >> r;
            if (r >= w / 2) {
                gap = sqrt(r * r - (w / 2) * (w / 2));
                bound.insert({p - gap, p + gap});
            }
        }
        for (; dy_lb < l; dy_lb = dy_ub) {
            bool flag = 0;
            for (iter = bound.begin(); iter != bound.end(); iter++) {
                if (iter->first <= dy_lb && iter->second > dy_ub) {
                    dy_ub = iter->second;
                    flag = 1;
                }
            }
            if (flag == 0)
                break;
            cnt++;
        }
        if (dy_lb < l)
            cout << -1 << endl;
        else
            cout << cnt << endl;
    }
    return 0;
}
