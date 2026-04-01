#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *ptr1, *ptr2;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Allocate memory using malloc
    ptr1 = (int *)malloc(n * sizeof(int));

    // Allocate memory using calloc
    ptr2 = (int *)calloc(n, sizeof(int));

    if (ptr1 == NULL || ptr2 == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("\nEnter %d elements for malloc array:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &ptr1[i]);
    }

    printf("\nEnter %d elements for calloc array:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &ptr2[i]);
    }

    printf("\nElements using malloc:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", ptr1[i]);
    }

    printf("\n\nElements using calloc:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", ptr2[i]);
    }

    free(ptr1);
    free(ptr2);

    return 0;
}
