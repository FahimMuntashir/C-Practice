/*
 Author : Fahim Muntashir
 mail : fahim.tech.me@gmail.com
*/

#include <stdio.h>
int main()
{
    int num[] = {10, 22, 15, 20, 25};
    int value;
    printf("enter the num you want to search : ");
    scanf("%d", &value);
    int position = -1;
    for (int i = 0; i < 5; i++)
    {
        if (value == num[i])
        {
            position = i + 1;
            break;
        }
    }
    if (position == -1)
    {
        printf("Number not found\n");
    }

    else
    {
        printf("The position of %d is : %d\n", value, position);
    }
}