// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int n, even =0, odd = 0, digit;
    scanf("%d",&n);
    
    if (n==0){
        printf("1");
    }
    else{
        while(n>0){
            digit = n%10;
            if (digit % 2 == 0){
                even = even + 1;
            }
            else{
                odd = odd + 1;
            }
            n = n/10;
            // sum += 1;
        }
        printf("Even :%d\n", even);
        printf("Odd : %d", odd);
    }

    return 0;
}