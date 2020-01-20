#include<stdio.h>
int sum(int, int);
int main()
{

    int a, b, c;
    printf("enter The first number:");
    scanf("%d", &a);
    printf("enter the second num :");

    scanf("%d", &b);

    //c=a+b;

    printf("The sum is : %d\n", sum(a,b));
    printf("Subtraction is : %d\n", a - b);
    printf("Multiplication is : %d\n", a * b);
    printf("Division is : %d\n", a / b);
}

int sum(int a, int b) {
    printf("hello\n");
    return a+b;

}