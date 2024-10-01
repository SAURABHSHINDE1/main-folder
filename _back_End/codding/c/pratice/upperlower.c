#include<stdio.h>

int main()
{
    int ll, ul,res;
     


    printf("Enter the lower limit:- ");
    scanf("%d", &ll);

    printf("Enter the upper limit:- ");
    scanf("%d", &ul);

    printf("Enter the tou want to check:-");
    scanf("%d",&res);

    if((res>ll) && (res<ul))
    {
        printf("The number is  between the %d and lower %d = %d",ll,ul,res);
    }
    else
    {
        printf("The number is not between the %d and lower %d = %d ",ll,ul,res);
    }
    return 0;
}