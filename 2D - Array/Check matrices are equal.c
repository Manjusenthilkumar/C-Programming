#include <stdio.h>

int main() {
    int rows, cols, equal = 1;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int A[rows][cols], B[rows][cols];

    // Input first matrix
    printf("Enter elements of first matrix:\n");
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            scanf("%d", &A[i][j]);

    // Input second matrix
    printf("Enter elements of second matrix:\n");
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            scanf("%d", &B[i][j]);

    // Compare matrices
    for(int i = 0; i < rows && equal; i++) {
        for(int j = 0; j < cols; j++) {
            if(A[i][j] != B[i][j]) {
                equal = 0; // Found unequal element
                break;
            }
        }
    }

    if(equal)
        printf("The matrices are equal.\n");
    else
        printf("The matrices are NOT equal.\n");

    return 0;
}
