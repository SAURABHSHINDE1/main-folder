#include<stdio.h>
int main()
{
    int a[20]={1,3,6,4,8,3,9,3,5,9,6,5,13,56,78,45,65,77,54,20};
    int i;
    int target;
    printf("Enter the element you want to find:");
    scanf("%d",&target);
    int n= sizeof(a) / sizeof(a[0]);
    int flag=0;
    for(i=0; i<n; i++)
    {
        if(a[i]==target)
        {
            flag=1;
            break;
        }
    }

    if(flag==1)
    {
        printf("%d the element found at index of %d",target,i);
    }
    else{
        printf("%d is not present in the array", target);
    }
}