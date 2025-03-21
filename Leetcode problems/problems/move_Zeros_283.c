#include<stdio.h>

void moveZeroes(int* nums, int numsSize) {
    int count = 0;
    for(int i =0; i<numsSize; i++)
    {
        if(nums[i] != 0)
        {
            nums[count++] = nums[i];
        }
    }

    while(count < numsSize)
    {
        nums[count++] = 0;
    }
}

int main(){
    int nums[] = {1, 0, 3, 4, 5};
    int n = sizeof(nums) / sizeof(nums[0]);

    moveZeroes(nums, n);

    printf("Array after moving zeroes to the end: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", nums[i]);
    }
}