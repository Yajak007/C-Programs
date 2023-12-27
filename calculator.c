#include<stdio.h>
int main()
{
    int a,b;
    char symbol;
    printf("\n For Addition Press + \n For Subtraction press -\nFor Multiplication Press * \n For Division Press / ");
    printf("\nEnter the Symbol, That you want to calculate:");
    scanf("%c",&symbol);
    printf("Enter the First Number:");
    scanf("%d",&a);
    printf("\nEnter the second Number:");
    scanf("%d",&b);
    if(symbol=='+')
    {

        printf("The Addition of two value is :%d",a+b);
    }
    else if(symbol == '-')
    {
        printf("The subtraction of two valus is %d",a-b);
    }
    else if(symbol == '*')
    {
        printf("The Multiplication of Two value is %d",a*b);
    }
    else if (symbol== '/')
    {
        printf("The Division of Two value is %d",a/b);
    }
    else{
        printf("Bruh You gave wrong Value Give a crt one");
    }
    
}