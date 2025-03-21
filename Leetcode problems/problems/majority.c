#include<stdio.h> 

int findMajorityElement(int nums[] ,int size)
{
    
    int count =0,max=nums[0],i;
    for(i = 1; i < size; i++)
    {
        if(max < nums[i])
        {
           max = nums[i]; 
        }
    }  

    int b[max+1];
    for(i=0; i<=max; i++)
    {
        b[i] =0;
    } 

    for(i = 0; i < size; i++)
    {
        for(int j =0; j<size;j++)
        {
            if(nums[i] == nums[j])
            {
                count++;
            }
        }
        b[nums[i]] = count;
    }

    int max1 = b[0], value=0;
    for(i =0; i<=max;i++)
    {
        if(max1 < b[i])
        {
            max1 = b[i];
            value =i;
        }
    }

    return value;
}

int main()
{
     int nums[] = {5,5,2};
    int size = sizeof(nums) / sizeof(nums[0]);

    int result = findMajorityElement(nums, size);
    printf("The majority element is: %d\n", result);
}