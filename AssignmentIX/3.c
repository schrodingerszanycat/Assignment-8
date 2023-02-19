//STATUS: SEGMENTATION FAULT
//3. Write a function in C to check whether an array of integers is a subarray of another array of integers.

#include <stdio.h>

int checkSubarray(int *, int *, int, int);

int checkEqual(int *, int *, int);

int main() {
    
    int m = 0, n = 0;
    printf("Enter the size of array and sub-array: ");
    scanf("%d %d", &m, &n);
    int arr[m], sub_arr[n];
    printf("Enter elements of the array: ");
    for (int i = 0; i < m; i++) 
        scanf("%d", &arr[i]);
    printf("Enter elements of the sub-array: ");
    for (int j = 0; j < n; j++) 
        scanf("%d", &sub_arr[j]);

    int val = checkSubarray(arr, sub_arr, m, n); 
    //printf("%s\n", val == 1? "proper sub_array" : "nope");
    if (val == 1) printf("yes. proper sub_array.\n");

}

int checkSubarray(int arr[], int sub_arr[], int m, int n) {

    int count = 0;
    int copy[n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; i < m; j++) {
            if (sub_arr[i] == arr[j]) {
                count++;
                for (int k = 0; k<n; k++) 
                    copy[k] = arr[j];  
            }          
        }
    } 
     
    int eval = checkEqual(sub_arr, copy, n);
    if (count == n && eval == 1) return 1;
    return -1;   

}

int checkEqual(int sub_arr[], int copy[], int n) {
    int c = 0;
    for (int i = 0; i < n; i++) {
        if(sub_arr[i] == copy[i]) 
            c = c+1;
    }
    if (c == n) return 1;
    return -1; 
}