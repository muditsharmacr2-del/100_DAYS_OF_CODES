/*Q46: Write a program to print the following pattern:
*****
*****
*****
*****
*****

Sample Test Cases:
Input 1:

Output 1:
*****
*****
*****
*****
*****



*/

#include <stdio.h>

int main()
{
    int n, m;
    printf("Enter number of rows\n");
    scanf("%d", &n);

    printf("Enter number of columbs\n");
    scanf("%d", &m);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}