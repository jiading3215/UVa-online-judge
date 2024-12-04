#include <stdio.h>

int main() {
    int side1, side2, side3;
    while (scanf("%d%d%d", &side1, &side2, &side3), side1 != 0 && side2 != 0 && side3 != 0){
        side1 = side1 * side1;
        side2 = side2 * side2;
        side3 = side3 * side3;
    if (side1 == side2 + side3 || side2 == side1 + side3 || side3 == side1 + side2)
        printf("right\n");
    else
        printf("wrong\n");
    }
    return 0;
}
