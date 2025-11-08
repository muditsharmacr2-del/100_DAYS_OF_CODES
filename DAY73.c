// Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/
#include <stdio.h>

int main()
{
    int rows, cols;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);
    int matrix[100][100];
    int row_sums[100];
    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < rows; i++)
    {
        row_sums[i] = 0;
        for (int j = 0; j < cols; j++)
        {
            row_sums[i] += matrix[i][j];
        }
    }
    printf("Row sums:\n");
    for (int i = 0; i < rows; i++)
    {
        printf("Row %d sum = %d\n", i + 1, row_sums[i]);
    }

    return 0;
}
