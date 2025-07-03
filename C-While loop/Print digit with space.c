#include <stdio.h>

int main() {
    int n, rev = 0, temp;
    printf("Enter the number: ");
    scanf("%d", &n);

    temp = n;

    // First reverse
    while(temp != 0) {
        int digit = temp % 10;
        rev = (rev * 10) + digit;
        temp = temp / 10;
    }

    // Second reverse (just to print digits in original order with space)
    while(rev != 0) {
        int digit = rev % 10;
        printf("%d ", digit);
        rev = rev / 10;
    }

    return 0;
}
