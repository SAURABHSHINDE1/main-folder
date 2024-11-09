#include<stdio.h>

int sentinal_search(int arr[], int n, int target)
{
   int last= arr[n-1];
   arr[n-1]=target;
   int i = 0;
   while(arr[i] !=target)
   {
       i++;
   }

   if(i < n-1 || last == target)
   {
       return i;
   }
    else{
        return -1;
    }
   

}
int main()
{
    int a[7]={2,5,4,7,3,1,6};
    int n=sizeof(a)/sizeof(a[0]);
    int target=7;
    int result=sentinal_search(a,n,target);
    if(result != -1)
    {
        printf(" %d Element found at index %d",target, result);
    }
    else
    {
        printf(" %d Element not found in the array",target);
    }
    return 0;
}