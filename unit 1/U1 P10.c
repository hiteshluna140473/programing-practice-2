        //Write a program to subtract two matrices.

#include <stdio.h>

int main() {
    int A[3][3] = {{10, 10, 10}, {5, 5, 5}, {1, 1, 1}};
    int B[3][3] = {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}};
    int C[3][3];
    int i, j;


    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            {
            C[i][j] = A[i][j] - B[i][j];
            }
    }
 printf("Result of Matrix Subtraction:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}

