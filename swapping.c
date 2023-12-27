#include<stdio.h>
int main(void)
{
    int a=20,b=30,temp;
    temp=a;
    a=b;
    b=temp;
    printf("a=%d \nb=%d",a,b);
}