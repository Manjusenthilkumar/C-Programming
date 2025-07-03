    #include <stdio.h>

    int main() {
        int rows, cols;

        // Input rows and columns
        printf("Enter rows and columns of the matrix: ");
        scanf("%d %d", &rows, &cols);

        int matrix[rows][cols], transpose[cols][rows];

        // Input matrix elements
        printf("Enter matrix elements:\n");
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                scanf("%d", &matrix[i][j]);
            }
        }

        // Transpose logic
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                transpose[j][i] = matrix[i][j];
            }
        }

        // Output transposed matrix
        printf("Transpose of the matrix:\n");
        for(int i = 0; i < cols; i++) {
            for(int j = 0; j < rows; j++) {
                printf("%d ", transpose[i][j]);
            }
            printf("\n");
        }

        return 0;
    }
