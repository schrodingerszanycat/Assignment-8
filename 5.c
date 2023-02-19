/*5. Write a function in C to implement selection sort.*/
#include <stdio.h>

int main() { 
    int size = 0;
    int arr[size];
    printf("Enter size of the array: ");
    scanf("%d", &size);
    printf("Enter elements of the array: ");
    for (int i = 0; i<size; i++) scanf("%d", arr[i]);

    selection_sort(arr, size);    
}
int swap(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}
int selection_sort(int arr[], int size) {
    int min = 0;
    for (int i = 1; i<size; i++) {
        if (arr[i]>arr[min]) {
            swap(arr[i], min);
        }
        else {
            min = min + 1;
        }
    }
    printf("The new array is:\n");
    for (int j = 0; j<size; j++) {        
        printf("%d ", arr[j]);
    }
}

