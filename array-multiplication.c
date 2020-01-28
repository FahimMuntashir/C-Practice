/*
 Author : Fahim Muntashir
 mail : fahim.tech.me@gmail.com
*/
#include <stdio.h>
int main()
{
    int first[10][10], second[10][10], result[10][10], r1, r2, c1, c2, i, j, k;
    printf("Enter Rows and Colums for the first matrix : ");
    scanf("%d %d", &r1, &c1);

    printf("Enter Rows and Colums for the second matrix : ");
    scanf("%d %d", &r2, &c2);

    while (c1 != r2)
    {
        printf("\n");
        printf("Error !! Column of first matrix not equal to row of second matrix\n\n\n");

        printf("Enter Rows and Colums for the first matrix : ");
        scanf("%d %d", &r1, &c1);

        printf("Enter Rows and Colums for the second matrix : ");
        scanf("%d %d", &r2, &c2);
    }
    //input for first matrix

     printf("First matrix : \n");

    for ( i = 0; i < r1; i++)
    {
        for ( j= 0; j < c1; j++)
       
        {
            
            printf(" [%d][%d]= ", i,j);
            scanf("%d ", &first[i][j]);
        }
         printf("\n");
    }
    //input for second matrix
    printf("Second matrix: ");
    for ( i = 0; i < r2; i++)
    {
        for ( j= 0; j < c2; j++)
        {
            printf("[%d][%d]= ", i,j);
            scanf("%d ", &second[i][j]);
        }
        
    }

    // print first matrix

    for ( i = 0; i < r1; i++)
    {
        for ( j = 0; j < c2; j++)
        {
            printf("%d", first[i][j]);
        }
        
    }
    // print second matrix

    for ( i = 0; i < r1; i++)
    {
        for ( j = 0; j < c2; j++)
        {
            printf("%d", second[i][j]);
        }
        
    }
}