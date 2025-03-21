#include<stdio.h>

int duplicateelement(int nums[], int numSize)
{
   int i,j,k=1;
   for(i=1;i<numSize;i++)
   {
    for(j=i-1;j<i;j++)
    {
        if(nums[j]==nums[i])
        {
            continue;
        }
        else
        {
           nums[k] = nums[i];
           k++;
        }
    }
   }
   return k;
}
int main()
{
    int nums[] ={1,1,2,3,4,4,5,6};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    int k =  duplicateelement(nums,numsSize);
    for(int i = 0; i < k;i++)
    {
        printf("%d ", nums[i]);
    }
    return 0;
}