/*
 Author : Fahim Muntashir
 mail : fahim.tech.me@gmail.com
*/

#include <stdio.h>
int main()
{
    char str[80];
    printf("Enter your name : \n");
    scanf("%[^\n]", str); // %[A-Za-z]
    printf("Welcome, %s\n", str);
    return 0;
}