#include <stdio.h>

int algo(int x) {
    if (x % 2 == 1)
        return x * 3 + 1;
    else
        return x / 2;
}

int main() {
    int a, b, ori_a, ori_b;
    while (scanf("%d%d", &a, &b) != EOF) {
        int temp, i, max = 1, ori_a = a, ori_b = b;
        if (a > b) {
            temp = a;
            a = b;
            b = temp;
        }
        for (i = a; i <= b; i++) {
            int cy = 1, copy_i = i;
            while (copy_i != 1) {
                copy_i = algo(copy_i);
                cy++;
            }
            if (cy > max)
                max = cy;
        }
        printf("%d %d %d\n", ori_a, ori_b, max);
    }
    return 0;
}
