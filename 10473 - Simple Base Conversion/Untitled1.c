#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char n[11];
    while (scanf("%s", n)) {
        if (n[0] == '-')
            break;
        if (n[0] == '0' && n[1] == 'x') {
            int num = 0, len = strlen(n) - 1, tr, mul = 1;
            for (; len >= 2; len--) {
                switch (n[len]) {
                    case 'A':
                    case 'a':
                        tr = 10;
                        break;
                    case 'B':
                    case 'b':
                        tr = 11;
                        break;
                    case 'C':
                    case 'c':
                        tr = 12;
                        break;
                    case 'D':
                    case 'd':
                        tr = 13;
                        break;
                    case 'E':
                    case 'e':
                        tr = 14;
                        break;
                    case 'F':
                    case 'f':
                        tr = 15;
                        break;
                    default:
                        tr = n[len] - '0';
                        break;
                }
                num += tr * mul;
                mul *= 16;
            }
            printf("%d\n", num);
        }
        else {
            int num = atoi(n);
            printf("0x%X\n", num);
        }
    }
    return 0;
}
