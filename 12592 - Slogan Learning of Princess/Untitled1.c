#include <stdio.h>
#include <string.h>

int main() {
    int n, q, i;
    char s[40][101];
    char in[101];
    scanf("%d", &n);
    getchar();
    for (i = 0; i < n * 2; i++)
        gets(s[i]);
    scanf("%d", &q);
    getchar();
    for (; q > 0; q--) {
        gets(in);
        for (i = 0; i < n * 2; i += 2)
            if (strcmp(in, s[i]) == 0) {
                puts(s[i + 1]);
                break;
            }
    }
    return 0;
}
