#include <stdio.h>
void minmax(int arr[], int len, int *min, int *max)
{
    int *ptr = arr;
    *min = *ptr;
    *max = *ptr;

    for (int i = 1; i < len; i++) {
        if (*(ptr + i) > *max) {
            *max = *(ptr + i);
        }
        if (*(ptr + i) < *min) {
            *min = *(ptr + i);
        }
    }
}

int main()
{
    int arr[9] = {10, 20, 50, 70, 60, 45, 98, 88, 5};
    int min, max;
    int len = sizeof(arr) / sizeof(arr[0]);

    minmax(arr, len, &min, &max);

    printf("Minimum = %d\n", min);
    printf("Maximum = %d\n", max);
    printf("lengthm = %d\n",len);


    return 0;
}

