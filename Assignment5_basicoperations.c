#include <stdio.h>

void main () {
int matrix_add () {
     int rows, cols, i, j;
        printf("Enter number of rows: ");
        scanf("%d", &rows);
        printf("Enter number of columns: ");
        scanf("%d", &cols);

        int matrix1[rows][cols], matrix2[rows][cols], sum[rows][cols];

        printf("Enter elements of first matrix:\n");
        for(i = 0; i < rows; i++) {
            for(j = 0; j < cols; j++) {
                printf("Element [%d][%d]: ", i + 1, j + 1);
                scanf("%d", &matrix1[i][j]);
            }
        }

        printf("Enter elements of second matrix:\n");
        for(i = 0; i < rows; i++) {
            for(j = 0; j < cols; j++) {
                printf("Element [%d][%d]: ", i + 1, j + 1);
                scanf("%d", &matrix2[i][j]);
            }
        }
           for(i = 0; i < rows; i++) {
            for(j = 0; j < cols; j++) {
                sum[i][j] = matrix1[i][j] + matrix2[i][j];
            }
        }

        printf("Sum of the two matrices is:\n");
        for(i = 0; i < rows; i++) {
            for(j = 0; j < cols; j++) {
                printf("%d ", sum[i][j]);
            }
            printf("\n");
        }

        return 0;
    }
 int saddle point () { 
         int rows, cols, i, j;
        printf("Enter number of rows: ");
        scanf("%d", &rows);
        printf("Enter number of columns: ");
        scanf("%d", &cols);
        int matrix[rows][cols];
        printf("Enter elements of the matrix:\n");
        for(i = 0; i < rows; i++) {
            for(j = 0; j < cols; j++) {
                printf("Element [%d][%d]: ", i + 1, j + 1);
                scanf("%d", &matrix[i][j]);
                }
        }

        printf("The matrix is:\n");
        for(i = 0; i < rows; i++) {
            for(j = 0; j < cols; j++) {
                printf("%d ", matrix[i][j]);
            }
            printf("\n");
 }
        int saddle_found = 0;

        for(i = 0; i < rows; i++) {
            int min_row = matrix[i][0];
            int col_index = 0;
            for(j = 1; j < cols; j++) {
                if(matrix[i][j] < min_row) {
                    min_row = matrix[i][j];
                    col_index = j;
                }
            }

            int is_saddle = 1;
            for(j = 0; j < rows; j++) {
                if(matrix[j][col_index] > min_row) {
                    is_saddle = 0;
                    break;
                }
            }
            if(is_saddle) {
                printf("Saddle point found at (%d, %d): %d\n", i + 1, col_index + 1, min_row);
                saddle_found = 1;
            }
        }
        if(!saddle_found) {
            printf("No saddle point found in the matrix.\n");
        }

        return 0;
    }
