#include <stdio.h>
#include <string.h>

void north(int *a, int *b, int *c, int *d) {
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = *d;
    *d = temp;
}

void south(int *a, int *b, int *c, int *d) {
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = *d;
    *d = temp;
}

void east(int *a, int *b, int *c, int *d) {
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = *d;
    *d = temp;
}

void west(int *a, int *b, int *c, int *d) {
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = *d;
    *d = temp;
}

int main() {
    int time;
    char in[6];
    while (scanf("%d", &time)) {
        if (time == 0)
            break;
        getchar();
        int d[7] = {1, 2, 3, 4, 5, 6};
        int *t = &d[0], *n = &d[1], *w = &d[2];
        int *b = &d[5], *s = &d[4], *e = &d[3];
        while (time--) {
            gets(in);
            if (strcmp(in, "north") == 0)
                north(t, s, b, n);
            else if (strcmp(in, "south") == 0)
                south(t, n, b, s);
            else if (strcmp(in, "east") == 0)
                east(t, w, b, e);
            else
                west(t, e, b, w);
        }
        printf("%d\n", *t);
    }
    return 0;
}
