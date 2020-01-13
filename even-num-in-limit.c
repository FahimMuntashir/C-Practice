/*
 Author : Fahim Muntashir
 mail : fahim.tech.me@gmail.com
*/

#include <stdio.h>

int main()
{
    int i, start, end;

    /* Input upper and lower limit */
    printf("Enter lower limit: ");
    scanf("%d", &start);
    printf("Enter upper limit: ");
    scanf("%d", &end);

    printf("All even numbers from %d to %d are: \n", start, end);

    /* If 'start' is not even make it even */
    if(start%2 != 0)
    {
        start++;
    }

    /*
     * Initialize loop from start and increment by 2, 
     * for each repetition
     */
    for(i=start; i<=end; i+=2)
    {
        printf("%d\n",i);
    }

    return 0;
}