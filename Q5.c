// Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/
#include <stdio.h>
int main()
{
    printf("enter the temprature in celcius");
    float cel;
    scanf("%f  ", &cel);
    float f = (cel * 1.8) + 32;
    printf("  %f", f);
    return 0;
}