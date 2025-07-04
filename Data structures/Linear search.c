// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int arr[100], n, key, found = 0;
    printf("Enter the number of elemnts in the array:");
    scanf("%d", &n);
    printf("Enter the search element:");
    scanf("%d", &key);
    
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    
    for(int i=0;i<n;i++){
        if(key == arr[i]){
            found = 1;
        }
    }
    
    if (found){
        printf("Element found");
    }
    else{
        printf("Element not found");
    }
    return 0;
}