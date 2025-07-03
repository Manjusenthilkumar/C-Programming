// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int n, sum =0;
    scanf("%d",&n);
    while (n>0){
        n = n/10;
        sum += 1;
    }
    printf("%d", sum);

    return 0;
}