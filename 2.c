//2. Write a function in C to implement a linear search on an array.

#include <stdio.h>

int linear_search(int *, int, int);

int main() {

    int size = 0;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of the array: ");
    for (int i = 0; i<size; i++) scanf("%d", arr[i]);
    
    int x = 0;
    printf("Enter the element you wish to search for: ");
    scanf("%d", &x);

    int val = linear_search(arr, size, x);
    if (val != -1) printf("Element %d is at index %d.", x, val);
    else printf("Element not found.");
}

int linear_search(int arr[], int size, int x) {
    for (int i = 0; i<size; i++) {
        if (arr[i] == x){
            return i;
        }
    return -1;
    }
}