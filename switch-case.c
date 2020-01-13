/*
 Author : Fahim Muntashir
 mail : fahim.tech.me@gmail.com
*/

#include <stdio.h>

int main()
{
    int number;

    printf("Enter a  number: ");
    scanf("%d", &number);

    switch (number % 2) //this will return either 0 or 1
    {
    case 0:
        printf("%d is an EVEN number.\n", number);
        break;
    case 1:
        printf("%d is an ODD number.\n", number);
        break;
    }

    //return 0;
}