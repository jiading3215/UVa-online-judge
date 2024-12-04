#include <stdio.h>

int main() {
    int n, i;
    long long bee[50];
    bee[0] = 0;
    bee[1] = 1;
    for (i = 2; i < 50; i++)
        bee[i] = bee[i - 1] + bee[i - 2] + 1;
    while (scanf("%d", &n)) {
        if (n == -1)
            break;
        printf("%lld %lld\n", bee[n], bee[n + 1]);
    }
    return 0;
}
