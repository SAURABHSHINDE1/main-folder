#include<stdio.h>

int search(int target, int a[],int n)
    {
    int i;
    int flag=0;
    for(i =0; i < n; i++)
    {
        if(a[i] == target){
            
            return i;
        }
    }
    return -1;
}
int main()
{
    int a[20]={2,4,3,1,7,5,9,8,6,12,45,76,99,45,34,56,88,34,48,78};
    int n=sizeof(a) / sizeof(a[0]);
    int target;
    printf("Enter the element you want to find:-");
    scanf("%d",&target);
   int result =  search(target,a,n);
   if(result!=-1)
   {
    printf("%d is found at %d index",target,result);
   }
   else
   {
      printf("%d is not found",target);
   }
}