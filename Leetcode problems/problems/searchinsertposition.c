#include<stdio.h>

int search(int nums[], int size, int target)
{
    int i,index=0;
    for(i=0;i<size;i++)
    {
      if(nums[i]>=target)
      {
        return i;
      }

    }
    
}
int main(){
    int nums[] ={1,2,4,5,6,7,9};
    int target = 3;
    int size = sizeof(nums)/sizeof(nums[0]);
    int index;
    index = search(nums, size, target);
   
    printf("\n The index of target is:-%d \n",index);

    return 0;
}