#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("At least one number is positive: %d\n", (a > 0) || (b > 0));
    return 0;
}

