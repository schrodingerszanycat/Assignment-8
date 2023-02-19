//8. Write a function in C to move all zeroes to the end of a given array.

#include <stdio.h>

int main() {

    int size = 0;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements of the array: ");
    for (int i = 0; i<size; i++) scanf("%d", &arr[i]);

}