
#include <stdio.h>

int main() {
    // Write C code here
    int n, rev = 0, rev3 = 0;
    printf("Enter the number:");
    scanf("%d",&n);
    int sq_org = n *  n;
    printf("Original square:%d\n", sq_org);
     
     while (n>0){
         int a = n%10;
         n = n/10;
         rev = (rev * 10) + a;
     }
    printf("Original reverse:%d\n", rev);
    int rev2 = rev*rev;
    printf("rev square:%d\n", rev2);
    
     while (sq_org>0){
         int a = sq_org%10;
         sq_org = sq_org/10;
         rev3 = (rev3 * 10) + a;
     }
     printf("Reverse of original square:%d\n", rev3);
     if (rev2 == rev3){
         printf("Adam number");
     }
     else{
         printf("Not adam number");
     }
    

    return 0;
}