#include <stdio.h>

int main() {
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input\n");
        return 0;
    }

    int term = 4; 
    for (int i = 0; i < n; i++) {
        printf("%d", term);
        if (i < n - 1) {
            printf(", ");
        }

        term = term + (i + 1) * (i + 1);
    }

    return 0;
}
