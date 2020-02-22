#include <stdio.h>
int main()
{
    int currentYear = 2020;
    int birthYear, age;

    printf("Enter your birth :");
    scanf("%d", &birthYear);
    age = currentYear - birthYear;
    printf("You are %d years old\n", age);
    return 0;
}