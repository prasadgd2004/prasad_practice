#include <stdio.h>

int main() {
    int a;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &a);

    // Use logical NOT with AND to check if it's not in the range
    //int result = !((a >= 10) && (a <= 50));

    // Print result (1 for true, 0 for false)
    printf("Number is NOT in the range 10 to 50: %d\n", !(a >= 10)&& (a <= 50));

    return 0;
}

