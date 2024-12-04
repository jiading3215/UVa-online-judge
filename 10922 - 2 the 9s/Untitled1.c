#include <stdio.h>

int div9(int);

int main() {
    char n[1001];
    while (scanf("%s", n), n[0] != '0') {
        int sum = 0, deg = 1, i;
        for (i = 0; n[i] != '\0'; i++)
            sum += n[i] - '0';
        if (sum % 9 != 0)
            printf("%s is not a multiple of 9.\n", n);
        else {
            while (sum % 9 == 0 && sum != 9) {
                sum = div9(sum);
                deg++;
            }
            printf("%s is a multiple of 9 and has 9-degree %d.\n", n, deg);
        }
    }
    return 0;
}

int div9(int x) {
    int nsum = 0;
    for (; (x+9) / 10 != 0; x /= 10)
        nsum += x % 10;
    return nsum;
}
