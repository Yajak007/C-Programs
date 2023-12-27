/*
loop

#include<stdio.h>
int main()
{
    int i,sum=2;
    for(i=1;i<=100;i++)
    {
        printf("%d\n",i);
    }
}*/



/*

adding all untill numbers for 10 ex:1+2+3+5+6+7+8+9

#include<stdio.h>
int main()
{
    int num,i,sum=0;
    printf("Enter the Number :");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        sum=sum+i;
    }
    printf("Result=%d",sum);
}
*/




/*

modules divide reminder usage

#include<stdio.h>
int main()
{
    int a=10,i;
    for(i=2;i<=a;i++)
    if(i%2==0){
        printf("%d\n",i);
    }
}*/

/*Prime Number Finder

#include<stdio.h>
int main()
{
    int n=11,i,flag=0;
    for(i=2;i<n/2;i++)
    {
    if(n%i==0)
    flag=1;
    break;
    }
    if(
        flag==0
    ){
        printf("It's a Prime Number");
    }
    else{
        printf("It is a non prime Number");
    }
}
/*


