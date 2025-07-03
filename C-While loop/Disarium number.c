// Online C compiler to run C program online
#include <stdio.h>
#include<math.h>

int main() {
    // Write C code here
    int n,digit = 0,sum = 0;
    printf("Enter the number:");
    scanf("%d",&n);
    
    int a = n,b = n;
    while(n!=0){
        digit+=1;
        n = n/10;
    }
    while(a!=0){
        int x=a%10;
        sum = sum+(pow(x,digit));
        digit = digit - 1;
        a = a/10;
    }
    
    if(sum == b){
        printf("Disarium");
    }
    else{
        printf("Not a Disarium");
    }

    return 0;
}