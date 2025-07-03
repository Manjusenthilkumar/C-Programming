// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int n, a = 2, b = 1;
    scanf("%d", &n);
    
    for(int i=0;i<=n;i++){
        printf("%d ", a);
        int c  = a + b;
        a = b;
        b = c;
    }

    return 0;
}