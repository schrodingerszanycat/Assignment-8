/*3. Write a function in C to implement binary search on a sorted array.*/
#include <stdio.h>

int bin_search(int arr[], int low, int high, int x);

int main() {
    int arr[10] = {1,12,33,44,57,67,73,89,97,100};
    int n = sizeof(arr)/sizeof(int);
    int x = 0;

    printf("Enter the number you wish to search for: ");
    scanf("%d", &x);    
    int pos = bin_search(arr, 0, n-1, x);
    printf("Element %d is at position %d.\n", x, pos+1);
}

int bin_search(int arr[], int low, int high, int x) {    
    int mid = (low + high)/2;
    if (arr[mid] == x) return mid;
    else if (arr[mid] > x) bin_search(arr, low, mid - 1, x);        
    else bin_search(arr, mid + 1, high, x);
}