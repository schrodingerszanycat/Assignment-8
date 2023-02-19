//STATUS: SEGMENTATION FAULT
// Write a function in C to find the transpose of a given matrix. 
//THIS IS USING KANDE'S ALGORITHM

#include <stdio.h>
#include <stdlib.h>

//int swap(int *x, int *y);

void transpose(int r, int c, int arr[][c]);

int main() {
    int r = 0, c = 0;
    printf("Enter the row and column size of the matrix: ");
    scanf("%d %d", &r, &c);
    int **arr = (int **) malloc(r*sizeof(int *));
    printf("Enter elements of the matrix: ");
    for (int i = 0; i<r; i++) {
        arr[i] = (int *) malloc(c*sizeof(int));
        for (int j = 0; j<c; j++) {
            scanf("%d", &arr[r][c]);
        }
    }

    printf("Original matrix is: ");
    for (int i = 0; i<r; i++){
        for (int j = 0; j<c; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    transpose(arr, r, c);
    
    printf("Transposed matrix is: ");
    for (int i = 0; i<r; i++) {
        for (int j = 0; j<c; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

// int swap(int *x, int *y) {
//     int temp = *x;
//     *x = *y;
//     *y = temp;
// }

void transpose(int r, int c, int arr[][c]) {
    int i, j;

    for (i = 0; i<r; i++) {
         
        for(int j = i; j < c; j++) {

            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
}