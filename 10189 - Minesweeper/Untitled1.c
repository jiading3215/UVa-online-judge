#include <stdio.h>

int main() {
    int m, n, f = 1;
    char in[100][101];
    char out[102][103];
    while (scanf("%d%d", &m, &n)) {
        if (m == 0 && n == 0)
            break;
        getchar();
        if (f != 1)
            printf("\n");
        int i, j;
        for (i = 0; i <= m + 1; i++)
            for (j = 0; j <= n + 1; j++)
                out[i][j] = '0';
        for (i = 0; i < m; i++) {
            scanf("%s", in[i]);
            getchar();
        }
        for (i = 0; i < m; i++)
            for (j = 0; j < n; j++)
                if (in[i][j] == '*') {
                    out[i][j]++;
                    out[i][j+1]++;
                    out[i][j+2]++;
                    out[i+1][j]++;
                    out[i+1][j+2]++;
                    out[i+2][j]++;
                    out[i+2][j+1]++;
                    out[i+2][j+2]++;
                }
        for (i = 0; i < m; i++)
            for (j = 0; j < n; j++)
                if (in[i][j] == '*')
                    out[i+1][j+1] = '*';
        printf("Field #%d:\n", f);
        for (i = 1; i <= m; i++) {
            for (j = 1; j <= n; j++)
                printf("%c", out[i][j]);
            printf("\n");
        }
        f++;
    }
    return 0;
}
