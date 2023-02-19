//8. Write a function in C to move all zeroes to the end of a given array.

#include <stdio.h>

int swap(int *x, int *y);

int to_shift_zeroes(int arr[], int size);

int main() {

    int size = 0;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements of the array: ");
    for (int i = 0; i<size; i++) 
        scanf("%d", &arr[i]);
    
    printf("The original array is : ");
    for (int i = 0; i<size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    to_shift_zeroes(arr, size);

    printf("The modified array is: ");
    for (int j = 0; j<size; j++) 
        printf("%d ", arr[j]);
    printf("\n");
}

int swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int to_shift_zeroes(int arr[], int size) {
    
    int j = 0;
    for (int i = 0; i<size; i++) {
        if (arr[i] != 0) 
            swap(&arr[i], &arr[j++]);
    }
}