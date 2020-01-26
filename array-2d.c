/*
 Author : Fahim Muntashir
 mail : fahim.tech.me@gmail.com
*/

#include <stdio.h>
int main()
{
    int a[3][4] = {{1, 2, 5, 8}, {8, 5, 7, 9}, {7, 8, 9, 6}};
    int i,j,row,col;
    row=3;
    col=4;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
}