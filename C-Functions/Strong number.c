#include <stdio.h>


int Strong(int n) {
    int sum = 0;
    
    while (n >0) {
        int digit = n%10;
        n = n/10;
        
        int fact = 1;
        for (int i=1;i<=digit;i++){
            fact = fact * i;
            
        }
        sum = sum+fact;
    }
    return sum;
}

int main() {
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    
    int fact = Strong(n);
    if (fact == n){
        printf("Strong Number");
    }
    else{
        printf("Not a strong number");
    }


    return 0;
}