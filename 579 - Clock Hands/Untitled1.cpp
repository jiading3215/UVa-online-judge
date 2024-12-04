#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;

int main() {
    int h;
    char m[3];
    while (1) {
        scanf("%d:%s", &h, m);
        if (h == 0 && m[0] == '0' && m[1] == '0')
            break;
        int tr_m;
        sscanf(m, "%d", &tr_m);
        double h_ang, m_ang, res;
        h_ang = 30 * h + 0.5 * tr_m;
        m_ang = 6 * tr_m;
        res = h_ang - m_ang;
        if (res < 0)
            res = abs(res);
        if (res > 180)
            res = 360 - res;
        printf("%.3lf\n", res);
    }
    return 0;
}
