
#include <stdio.h>

int main() {
    // Write C code here
    int n, sum = 0;
    printf("Enter the no of elements:");
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    
    printf("Sum of the numbers: %d", sum);

    return 0;
}