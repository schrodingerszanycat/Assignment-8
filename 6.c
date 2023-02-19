//6. Write a function in C to find the maximum subarray sum of a given array.

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int max_sum(int arr[], int size);

int main() {

    int size = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int *arr = (int *) malloc(size*sizeof(int));
    printf("Enter the elements of the array: ");
    for (int i = 0; i<size; i++) {
        scanf ("%d", &arr[i]);
    }

    printf("The maximum contiguous subarray sum is %d.\n", max_sum(arr, size));

    free(arr);
    arr = NULL;
    return 0;
}

int max_sum(int arr[], int size) {
    int max = INT_MIN;

    for (int i = 0; i < size; i++) {
        int sum = 0;
        for (int j = i; j < size; j++) {
            sum += arr[j];
            if (sum > max) max = sum;
        }
    }
    return max;
}


//ALSO CHECK OUT https://www.geeksforgeeks.org/maximum-subarray-sum-using-divide-and-conquer-algorithm/