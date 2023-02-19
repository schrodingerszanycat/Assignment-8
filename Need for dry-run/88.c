//8. Write a function in C to move all zeroes to the end of a given array.

#include <stdio.h> 

int shift_zeroes(int *, int);

int swap(int *x, int *y);

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
    shift_zeroes(arr, size);

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

int shift_zeroes(int *arr, int size) {
    for (int i = 0; i<size; i++) {
        for (int j = 0; j<size; j++) {
            if (arr[j] == 0) {
                if (arr[size-i-1] != 0) swap (&arr[j], &arr[size-i-1]);
                else swap (&arr[j], &arr[size-i]);
            }
        }
    }
}