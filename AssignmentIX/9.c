//9. Write a function in C to implement bubble sort.

#include <stdio.h>

void bubble_sort(int arr[], int size);

void swap(int *, int *);

int main() {

    int size = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter all the elements: ");
    for (int i = 0; i<size; i++) scanf("%d", &arr[i]);
    
    bubble_sort(arr, size);
    printf("The new array is: ");
    for (int i = 0; i<size; i++) printf("%d ", arr[i]);
    printf("\n");
}

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubble_sort(int arr[], int size) {

    for (int i = 0; i<size-1; i++) {

        for (int j = 0; j<size-1; j++) {

            if (arr[j+1] < arr[j]) 
                swap(&arr[j+1], &arr[j]);
        }
    }
}