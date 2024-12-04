#include <stdio.h>

int check(int x[5][5]) {
    int line = 0, i;
    if (x[0][0] && x[1][1] && x[3][3] && x[4][4])
        line++;
    if (x[0][4] && x[1][3] && x[3][1] && x[4][0])
        line++;
    for (i = 0; i < 5; i++)
        if (x[i][0] && x[i][1] && x[i][2] && x[i][3] && x[i][4])
            line++;
    for (i = 0; i < 5; i++)
        if (x[0][i] && x[1][i] && x[2][i] && x[3][i] && x[4][i])
            line++;
    return line;
}

int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        int b[5][5], c[5][5] = {0}, s[75];
        int i, j;
        b[2][2] = 0;
        c[2][2]++;
        for (i = 0; i < 5; i++)
            for (j = 0; j < 5; j++) {
                if (i == 2 && j == 2)
                    continue;
                scanf("%d", &b[i][j]);
            }
        for (i = 0; i < 75; i++)
            scanf("%d", &s[i]);
        for (i = 0; i < 75; i++) {
            if (s[i] >= 1 && s[i] <= 15) {
                for (j = 0; j < 5; j++)
                    if (s[i] == b[j][0]) {
                        c[j][0]++;
                        break;
                    }
            }
            else if (s[i] >= 16 && s[i] <= 30) {
                for (j = 0; j < 5; j++)
                    if (s[i] == b[j][1]) {
                        c[j][1]++;
                        break;
                    }
            }
            else if (s[i] >= 31 && s[i] <= 45) {
                for (j = 0; j < 5; j++)
                    if (s[i] == b[j][2]) {
                        c[j][2]++;
                        break;
                    }
            }
            else if (s[i] >= 46 && s[i] <= 60) {
                for (j = 0; j < 5; j++)
                    if (s[i] == b[j][3]) {
                        c[j][3]++;
                        break;
                    }
            }
            else {
                for (j = 0; j < 5; j++)
                    if (s[i] == b[j][4]) {
                        c[j][4]++;
                        break;
                    }
            }
            if (check(c) > 0) {
                printf("BINGO after %d numbers announced\n", i+1);
                break;
            }
        }
    }
    return 0;
}
