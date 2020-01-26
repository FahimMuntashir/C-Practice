/*
 Author : Fahim Muntashir
 mail : fahim.tech.me@gmail.com
*/
#include <stdio.h>
int main()
{
    int A[3][4], B[3][4];
    int i, j;
    printf("Enter elements for A matrix :\n ");

    //scaning for A matrix
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("A[%d][%d]= ", i, j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }
    printf("A= ");
    // print for A matrix
    for (i = 0; i < 3; i++)
    {
        printf("\t");
        for (j = 0; j < 4; j++)
        {
            printf("%d", A[i][j]);
        }
        printf("\n");
    }

     printf("Enter elements for B matrix :\n ");

    //scaning for B matrix
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("B[%d][%d]= ", i, j);
            scanf("%d", &B[i][j]);
        }
        printf("\n");
    }
    printf("B= ");
    // print for B matrix
    for (i = 0; i < 3; i++)
    {
        printf("\t");
        for (j = 0; j < 4; j++)
        {
            printf("%d", B[i][j]);
        }
        printf("\n");
    }
}