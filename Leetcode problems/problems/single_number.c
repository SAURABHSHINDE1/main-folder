#include<stdio.h>

int single_number(int nums[], int numsSize)
{
    int i,flag,j,n;
    for(i=0; i< numsSize;i++)
    {
        flag=0;
        for(j=0; j<numsSize; j++)
        {
            if(nums[i] == nums[j] && i!=j)
            {
                flag=1;
                break;
            }
           
        }

        if(flag == 1)
        {
            continue;
        }
         n = nums[i];
    }

    return n;

}

int main()
{
    int nums[]={2,1,3,3,2};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    printf("The single no is:- %d",single_number(nums,numsSize));
}