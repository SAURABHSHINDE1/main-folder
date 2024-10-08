#include<stdio.h>

int main()
{
    int arr[]={3,67,54,28,43,69,75};
    int m,i, prime=0;

    if(arr==0)
    {
        printf("number is not prime:");
        
    }

    for(i=0 ;i<=7; i++)
    {
        m=arr[i]/2;
        for(int j=2; j<=m; j++)
        {
            if(arr[i]%j==0)
            {
                prime=1;
                break;
            }
    
    }

    if(prime==0){

        printf("The number is prime\n %d ",arr[i]);
    }
    else{
        printf("The number is not prime\n %d ",arr[i]);
    }
}
}