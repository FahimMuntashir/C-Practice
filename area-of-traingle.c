/*
 Author : Fahim Muntashir
 mail : fahim.tech.me@gmail.com
*/

// area of traingle used for sqrt() function

#include <stdio.h>
#include <math.h>
int main()
{
    float S, a, b, c, area;
    printf("Enter three lengths:\n ");
    scanf("%f %f %f", &a, &b, &c);
    S = (a + b + c) / 2; /* S= perimeter */
    area = sqrt(S * (S - a) * (S - b) * (S - c));
    printf("The Area is : %f\n", area);
}