/*
 Author : Fahim Muntashir
 mail : fahim.tech.me@gmail.com
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[80];
    strcpy(str, "hello world");
    printf("Massage is : %s\n", str);

    char str1[] = "hello candy";
    strcpy(str, str1);
    printf("Massage is : %s\n", str);
    return 0;
}