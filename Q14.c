// Q14//: Write a program to input a character and check whether it is a vowel or consonant using if–else.

/*
Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a Character");
    scanf("%c", &ch);
    if (ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
    {
        printf("Vowel");
    }
    else
    {
        printf("consonant");
    }
    return 0;
}