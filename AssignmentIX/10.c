//10. Write a program in C to dynamically allocate and deallocate memory for a lower triangular matrix.

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int size = 0;
    printf("Enter size of the square matrix: ");
    scanf("%d", &size);
    int **arr = (int **) calloc(size, sizeof(int *));
    int n = size*(size-1)*0.5 + size;
    printf("Enter all the lower triangular elements "
    "(all %d of them)\n", n);
    for (int i = 0; i<size; i++) {
        arr[i] = (int *) calloc(size, sizeof(int));
        for (int j = 0; j <= i; j++) {
            scanf("%d", &arr[i][j]);
        } 
    }

    for (int i = 0; i<size; i++) {
        for (int j = 0; j<size; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    free(arr);
    arr = NULL;
}
