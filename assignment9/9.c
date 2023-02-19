//9. Write a function in C to implement bubble sort.

#include <stdio.h>

int bubble_sort(int *, int); 

int swap(int *, int *);

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

int swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int bubble_sort(int arr[], int size) {
    for (int i = 0; i<size-1; i++) {
        if (arr[i+1] < arr[i]) {
            swap(arr[i+1], arr[i]);
        }
    }
}