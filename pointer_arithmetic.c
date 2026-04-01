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

    printf("\nUsing pointer arithmetic:\n");
    for(i = 0; i < 5; i++) {
        printf("Value at ptr + %d = %d\n", i, *(ptr + i));
    }

    printf("\nUsing pointer increment:\n");
    ptr = arr;
    for(i = 0; i < 5; i++) {
        printf("Value = %d\n", *ptr);
        ptr++;
    }

    return 0;
}
