#include <stdio.h>

int sum_diagonal_elements(int matrix[][10], int rows, int cols) {
    int sum = 0;


    if (rows != cols) {
        printf("Error: The matrix is not square.\n");
        return -1;
    }


    for (int i = 0; i < rows; i++) {
        sum += matrix[i][i];
    }

    return sum;
}

int main() {
    int rows, cols;
    int matrix[10][10];

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);


    if (rows != cols) {
        printf("Error: The matrix is not square.\n");
        return 1;
    }

    printf("Enter the matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }


    int sum = sum_diagonal_elements(matrix, rows, cols);
    if (sum != -1) {
        printf("Sum of diagonal elements: %d\n", sum);
    }

    return 0;
}
