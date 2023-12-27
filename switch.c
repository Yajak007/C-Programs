#include<stdio.h>
int main()
{
    int choice;
    printf("\nWelcome to  Muniyandi Villas \n\nHere You can See the Menu of Food Items");
    printf("\n\n1.Parotta \n2.Chapathi \n3.Noodles \n4.FriedRice \n5.Biriyani \n6.Idiiyappam \n7.Meals");
    printf("\n\n\nPlease Enter the Food item Number");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("\n\nThe Parotta Cost is Ten Ruppees");
        break;
        case 2:
        printf("\n\nThe Chapathi Cost is 20 Ruppees");
        break;
        case 3:
        printf("\n\nThe Noodles Cost is 150 Ruppees");
        break;
        case 4:
        printf("\n\nThe Fried Rice cost is 180 Rupees");
        break;
        case 5:
        printf("\n\nThe Biriyani Cost is 400 Ruppess");
        break;
        case 6:
        printf("\n\nThe iddiyappam Cost is 40 Ruppees");
        break;
        case 7:
        printf("\n\nThe Meals Cost is 200 Ruppees");
        break;
        default :
        printf("\n\nPlease Contact the waiter To get special One");
    }

}