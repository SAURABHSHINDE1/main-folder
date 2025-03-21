#include<stdio.h>

int* Two_sum(int arr[], int target , int size , int *p)
{
    int i , j;
    for(i = 0; i < size ; i++)
    {
        for(j = i+1; j < size ; j++)
        {
            if(arr[i] + arr[j] == target)
            {
                p[0] = i;
                p[1] = j;
                return p;
            }
        }
    }
    return NULL;
}
int main()
{
    int array[] ={1,2,3,4,5,6,7};
    int size = sizeof(array) / sizeof(array[0]);
    int target = 9;
    int *p;
     
    p = Two_sum(array, target,size, p);

    if(p == NULL)
    {
        printf("No such element found in an array \n");
    }
    else{
        printf("indices are:- [%d  %d]",p[0],p[1]);
    }


}