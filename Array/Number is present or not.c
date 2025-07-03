#include <stdio.h>

int main() {
    // Write C code here
    int n,search, count = 0;
    printf("Enter the no of elements:");
    scanf("%d",&n);
    printf("Enter the search number:");
    scanf("%d",&search);
    int arr[n];
    
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
         if(arr[i] == search){
            printf("Present");
            count = 1;
            break;
        }
    }
    if (count == 0){
        printf("Not present");
    }




    return 0;
}