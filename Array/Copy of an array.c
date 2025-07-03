#include <stdio.h>

int main() {
    // Write C code here
    int n;
    printf("Enter the no of elements:");
    scanf("%d",&n);
    
    int arr[n], arr2[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
        arr2[i] = arr[i];
    }
    printf("Copy of the array:");
    for(int i=0;i<n;i++){
        printf("%d", arr[i]);
    }
    
    

    return 0;
}