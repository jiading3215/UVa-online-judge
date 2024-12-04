#include <stdio.h>

int main() {
    int t, n, i;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        int sum = 0;
        for (i = 2; i <= n / 2; i++)
            if (n % i == 0)
                sum += i;
        sum++;
        if (sum > n)
            printf("abundant\n");
        else if (sum < n)
            printf("deficient\n");
        else
            printf("perfect\n");
    }
    return 0;
}
