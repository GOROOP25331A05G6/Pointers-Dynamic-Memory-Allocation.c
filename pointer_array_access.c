#include <stdio.h>

int main() {
    int arr[5];
    int *ptr;
    int i;

    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    ptr = arr;

    printf("\nArray elements using pointer:\n");
    for(i = 0; i < 5; i++) {
        printf("Element %d = %d\n", i + 1, *(ptr + i));
    }
printf("\n25331A05G6\n");

    return 0;
}
