// Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the radius\n");
    scanf("%d ", &a);
    int circumference = 2 * 3.14 * a;
    int area = 3.14 * a * a;
    printf("%d is the circumference\n ", circumference);
    printf(" %d is the area", area);

    return 0;
}