
#include <stdio.h>

int main() {
    // Write C code here
    int n1, n2;
    int arr1[10], arr2[10];
    printf("Enter the number of elements arr1:");
    scanf("%d", &n1);
    printf("Enter the number of elements arr2:");
    scanf("%d", &n2);
    
    printf("Enter the array 1:");
    for(int i=0;i<n1; i++){
        scanf("%d", &arr1[i]);
    }
    
    printf("Enter the array 2:");
    for(int i=0;i<n2;i++){
        scanf("%d", &arr2[i]);
    }
    
    for(int i=0;i<n2;i++){
        arr1[n1+i] = arr2[i];
    }
    
    for (int i=0; i<n1+n2; i++){
        printf("%d ", arr1[i]);
    }
    
    return 0;
}