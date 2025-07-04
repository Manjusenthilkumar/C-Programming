// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int arr[100], n, key, found = 0, mid, low, high;
    printf("Enter the number of elemnts in the array:");
    scanf("%d", &n);
    printf("Enter the search element:");
    scanf("%d", &key);
    
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    
    low = 0; high = n-1;
    
    
    while(low <= high){
        mid = (low+high)/2;
        if(arr[mid] == key){
            found = 1;
            break;
        }
        else if(arr[mid] > key){
            high = mid - 1;
        }
        else{
            low = mid + 1;
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