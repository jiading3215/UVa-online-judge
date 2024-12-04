#include <stdio.h>

int main() {
    int n, m;
    while (scanf("%d%d", &n, &m) != EOF) {
        if (m < 2 || m > n) {
            printf("Boring!\n");
            continue;
        }
        int flag = 0, cpy_n = n, cpy_m = m;
        for (; n != 1; n /= m) {
            if (n % m != 0) {
                printf("Boring!\n");
                break;
            }
            if (n == m)
                flag = 1;
        }
        if (flag) {
            while (cpy_n != 1) {
                printf("%d ", cpy_n);
                cpy_n /= cpy_m;
            }
            printf("1\n");
        }
    }
    return 0;
}
