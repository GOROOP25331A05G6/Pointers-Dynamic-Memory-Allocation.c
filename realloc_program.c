#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int n, i, new_size;

    printf("Enter initial number of elements: ");
    scanf("%d", &n);

    // Allocate memory using malloc
    ptr = (int *)malloc(n * sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
    }

    printf("\nOriginal elements:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }

    // Reallocate memory
    printf("\n\nEnter new size of array: ");
    scanf("%d", &new_size);

    ptr = (int *)realloc(ptr, new_size * sizeof(int));

    if (ptr == NULL) {
        printf("Reallocation failed\n");
        return 1;
    }

    // Input additional elements if size increased
    if (new_size > n) {
        printf("Enter %d more elements:\n", new_size - n);
        for(i = n; i < new_size; i++) {
            scanf("%d", &ptr[i]);
        }
    }

    printf("\nUpdated elements:\n");
    for(i = 0; i < new_size; i++) {
        printf("%d ", ptr[i]);
    }

    // Free allocated memory
    free(ptr);
printf("\n25331A05G6\n");
    return 0;
}
