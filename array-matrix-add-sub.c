/*
 Author : Fahim Muntashir
 mail : fahim.tech.me@gmail.com
*/
#include <stdio.h>
int main()
{
    int A[10][10], B[10][10], C[10][10];
    int i, j;
    int numOfRows, numOfCols;
    printf("Enter the number of Rows and Colums : \n");
    scanf("%d %d", &numOfRows, &numOfCols);

    //scaning for A matrix
    printf("Enter elements for A matrix :\n ");

    for (i = 0; i < numOfRows; i++)
    {
        for (j = 0; j < numOfCols; j++)
        {
            printf("A[%d][%d]= ", i, j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }
    //scaning for B matrix
    printf("Enter elements for B matrix :\n ");
    for (i = 0; i < numOfRows; i++)
    {
        for (j = 0; j < numOfCols; j++)
        {
            printf("B[%d][%d]= ", i, j);
            scanf("%d", &B[i][j]);
        }
        printf("\n");
    }

    printf("A= ");
    // print for A matrix
    for (i = 0; i < numOfRows; i++)
    {
        printf("\t");
        for (j = 0; j < numOfCols; j++)
        {
            printf("%d", A[i][j]);
        }
        printf("\n");
    }

    printf("\n\nB= ");
    // print for B matrix
    for (i = 0; i < numOfRows; i++)
    {
        printf("\t");
        for (j = 0; j < numOfCols; j++)
        {
            printf("%d", B[i][j]);
        }
        printf("\n");
    }

    // adding the matrix
    for (i = 0; i < numOfRows; i++)
    {
        printf("\t");
        for (j = 0; j < numOfCols; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // printing c matrix
    printf("\n A+B =");
    for (i = 0; i < numOfRows; i++)
    {
        printf("\t");
        for (j = 0; j < numOfCols; j++)
        {
           printf("%d", C[i][j]);
        }
        printf("\n");
    }
}