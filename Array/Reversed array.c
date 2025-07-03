#include <stdio.h>

int main() {
    // Write C code here
    int n;
    printf("Enter the no of elements:");
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    printf("Reversed array:");
    for(int i=n-1;i>=0;i--){
        printf("%d ", arr[i]);
    }


    return 0;
}