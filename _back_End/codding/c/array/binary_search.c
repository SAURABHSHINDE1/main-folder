#include<stdio.h>

int search(int target,int a[], int n,int low,int high)
{   int mid;

    while(low<=high)
    {
        mid = (low + high) /2;
        if(a[mid]==target)
        {
           return mid;
        }
        else if(a[mid]>target)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    
    }
    return -1;
}
int main()
{
    int a[7]={1,2,3,4,5,6,7};
    int n=sizeof(a) / sizeof(a[0]);
    int target;
    printf("Enter the target element: ");
    scanf("%d", &target);
    int low=0,high=n-1;
    int result=search(target,a,n,low,high);

    if(result != -1)
    {
        printf(" %d Element found at index %d",target, result);
    }
    else{
        printf(" %d Element not found in the array",target);
    }
}