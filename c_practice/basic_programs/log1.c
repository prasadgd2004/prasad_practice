
#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Both > 0: %d\n", (a > 0) && (b > 0));
    printf("At least one > 0: %d\n", (a > 0) || (b > 0));
    printf("Not (a > 0): %d\n", !(a > 0));
    return 0;
}


