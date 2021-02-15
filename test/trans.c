#include <stdio.h>

void transpose(double a[100][100], double trans[100][100])
{

    int r, c, i, j;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    // Assigning elements to the matrix
    printf("\nEnter matrix elements:\n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }

    // Displaying the matrix 
    printf("\nEntered matrix: \n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {
            printf("%d  ", a[i][j]);
            if (j == c - 1)
                printf("\n");
        }

    // Finding the transpose of matrix 
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {
            trans[j][i] = a[i][j];
        }

    // Displaying the transpose of matrix 
    printf("\nTranspose of the matrix:\n");
    for (i = 0; i < c; ++i)
        for (j = 0; j < r; ++j)
        {
            printf("%d  ", trans[i][j]);
            if (j == r - 1)
                printf("\n");
        }
}