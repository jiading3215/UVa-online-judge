#include <stdio.h>

int main() {
    char a[10], b[10];
    while (scanf("%s%s", a, b)) {
        if (a[0] == '0' && b[0] == '0')
            break;
        int i, j, carry = 0, cmp, one;
        for (i = 0; a[i] != '\0'; i++);
        for (j = 0; b[j] != '\0'; j++);
        i--;
        j--;
        if (i > j) {
            for (; j >= 0; j--) {
                if (a[i] - '0' + b[j] - '0' > 9) {
                    carry++;
                    a[i-1]++;
                }
                i--;
            }
            while (i > -1 && a[i] > '9') {
                carry++;
                a[i-1]++;
                i--;
            }
        }
        else {
            for (; i >= 0; i--) {
                if (a[i] - '0' + b[j] - '0' > 9) {
                    carry++;
                    b[j-1]++;
                }
                j--;
            }
            while (j > -1 && b[j] > '9') {
                carry++;
                b[j-1]++;
                j--;
            }
        }
        if (carry == 0)
            printf("No carry operation.\n");
        else if (carry == 1)
            printf("1 carry operation.\n");
        else
            printf("%d carry operations.\n", carry);
    }
    return 0;
}
