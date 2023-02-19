// 5. Write a function in C to implement selection sort.

#include <stdio.h>

int swap(int *x, int *y);

void selection_sort(int arr[], int size);

int main() { 
    int size = 0;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements of the array: ");
    for (int i = 0; i<size; i++) scanf("%d", &arr[i]);

    selection_sort(arr, size);
}

int swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void selection_sort(int arr[], int size) {
    
    for (int i = 0; i<size; i++) {
        int min = i;
        for (int j = i+1; j<size; j++) {
            if (arr[j]<arr[min]) {
                min = j;
            }
        }
        swap(&arr[i], &arr[min]);
    }

    printf("The new array is:\n");
    for (int j = 0; j<size; j++) {        
        printf("%d ", arr[j]);
    }
    printf("\n");
}
