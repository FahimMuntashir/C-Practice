/*
 Author : Fahim Muntashir
 mail : fahim.tech.me@gmail.com
*/


#include<stdio.h>
int main() {
    int a;
    printf("Enter your age :");
    scanf("%d", &a);
    
    if (a<18)
    {
        printf("Child\n");
    }
    else if (a>40)
    {
        printf("Old\n");
    }
    else
    {
        printf("Young\n");
    }
    
    
    
    

}