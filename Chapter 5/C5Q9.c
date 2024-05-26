#include<stdio.h>
int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    int mx = -1e9, mn = 1e9;
    for(int i=0; i<n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
        if(arr[i] > mx) mx = arr[i];
        if(arr[i] < mn) mn = arr[i];
    }
    printf("Range: %d", mx - mn);
    return 0;
}