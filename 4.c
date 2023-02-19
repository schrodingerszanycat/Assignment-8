//4. Write a function in C to check whether an array is a subset of another array.

#include <stdio.h>

int checkSubset(int *, int *, int, int);

int main() {
    
    int m = 0, n = 0;
    printf("Enter the size of array and sub-array: ");
    scanf("%d %d", &m, &n);
    int arr[m], sub_set[n];
    printf("Enter elements of the array: ");
    for (int i = 0; i < m; i++) 
        scanf("%d", &arr[i]);
    printf("Enter elements of the sub-set: ");
    for (int j = 0; j < n; j++) 
        scanf("%d", &sub_set[j]);

    int val = checkSubset(arr, sub_set, m, n); 
    //printf("%s\n", val == 1? "proper sub_set" : "nope");
    if (val == 1) printf("yes. proper sub_set.\n");

}

int checkSubset(int arr[], int sub_set[], int m, int n) {

    int count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; i < m; j++) {
            if (sub_set[i] == arr[j]) {
                count++;     
            }
        } 
    }   

    if (count == n) return 1;
    return -1;   
}

