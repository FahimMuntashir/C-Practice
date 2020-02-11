/*
 Author : Fahim Muntashir
 mail : fahim.tech.me@gmail.com
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[80];
    printf("Enter a String :");
    scanf("%[^\n]", str);

    int i, countAlpha = 0, countSpace = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z'))
        {
            countAlpha++;
        }
        else if (str[i] == ' ')
        {
            countSpace++;
        }
    }
    printf("Total Alphabetic character found : %d \n", countAlpha);
    printf("Total Space character found :%d \n", countSpace);
}
