#include <stdio.h>
#include <string.h>

int main() {
    char n[1001];
    while (gets(n)) {
        if (n[0] == '0' && strlen(n) == 1)
            break;
        int i, odd = 0, even = 0;
        for (i = 0; n[i] != '\0'; i++) {
            if (i % 2 == 0)
                even += n[i] - '0';
            else
                odd += n[i] - '0';
        }
        for (i = 0; n[i] == ' '; i++);
        while (n[i] != ' ' && n[i] != '\0') {
            printf("%c", n[i]);
            i++;
        }
        if ((odd - even) % 11 == 0)
            printf(" is a multiple of 11.\n", n);
        else
            printf(" is not a multiple of 11.\n", n);
    }
    return 0;
}
