/*
 Author : Fahim Muntashir
 mail : fahim.tech.me@gmail.com
*/

#include <stdio.h>
double getSimpleInterest(double principal, double rate, double time)
{
    double interest;
    interest = (principal * rate * time) / 100;
    return interest;
}
int main()
{

    double i, p, r, t;
    printf("Enter principal: \n");
    scanf("%lf", &p);
    printf("Enter rate of Interest :\n");
    scanf("%lf", &r);
    printf("Enter duration :\n");
    scanf("%lf", &t);

    i = getSimpleInterest(p, r, t);
    printf("Total Interest : $ %.2lf\n", i);
    return 0;
}