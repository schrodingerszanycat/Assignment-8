//7. Write a function in C to find the maximum circular subarray sum of a given array.

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {
    int size = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int *arr = (int *) malloc(size*sizeof(int));
    printf("Enter elements of the array: ");
    for (int i = 0; i < size; i++) 
        scanf("%d", &arr[i]);

    

    free(arr);
    arr = NULL;
    return 0;
}