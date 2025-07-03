#include <stdio.h>

int result(int n){
    if (n == 0){
        return 0;
    }
    else {
        result(n-1);
        printf("%d ", n);
    }

}

int main() {
    // Write C code here
   int n;
    printf("Enter the number:");
    scanf("%d", &n);
    result(n);


    return 0;
}