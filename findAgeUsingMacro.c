#include <stdio.h>
#define currentYear 2020
#if !(defined(currentYear) && currentYear + 0)
#error please type the current year in source code
#endif
int main()
{

    int birthYear, age;

    printf("Enter your birth :");
    scanf("%d", &birthYear);
    age = currentYear - birthYear;
    printf("You are %d years old\n", age);
    return 0;
}
