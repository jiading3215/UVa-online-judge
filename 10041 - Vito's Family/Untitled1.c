#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        int r, house[500];
        scanf("%d", &r);
        int i;
        for (i = 0; i < r; i++)
            scanf("%d", &house[i]);
        int j, k;
        for (j = r - 1; j != 0; j--)
            for (k = 0; k < j; k++)
                if (house[k] > house[k+1]) {
                    int temp;
                    temp = house[k];
                    house[k] = house[k+1];
                    house[k+1] = temp;
                }
        int sum = 0, med = house[r / 2], l;
        for (l = 0; l < r; l++)
            sum += abs(med - house[l]);
        printf("%d\n", sum);
    }
    return 0;
}
