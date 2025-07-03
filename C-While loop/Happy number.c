// Online C compiler to run C program online
#include <stdio.h>

int Square(int n){
     int  digit, sum = 0;
    while (n>0){
        digit = n% 10;
        sum = sum +digit *digit;
        n = n / 10;
    }
    return sum;
}

int main() {
    // Write C code here
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    
    
    int original = n;
    
    while (n != 1 && n != 4){
        n = Square(n);
    }
    
    if (n == 1){
        printf("Happy number");
    }
    else{
        printf("Not a happy number");
    }
    
    return 0;
}