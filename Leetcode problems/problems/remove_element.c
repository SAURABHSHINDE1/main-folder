#include<stdio.h>

int remove_element(int arr[], int value, int size){
    int i = 0, j = 0,count=0;
    for(i = 0; i < size; i++)
    {
        if(arr[i] != value)
        {
            arr[j] = arr[i];
            j++;
            count++;
        }
    }
    return count;
}
int main()
{
    int arr[5] = {1,2,3,4,5};
    int value =3;
    int size =sizeof(arr) / sizeof(arr[0]);
    printf("%d",size);
    int size1 = remove_element(arr, value, size);
    printf("The array after remove element:-");
    for(int i =0; i < size1; i++)
    {

            printf("%d ",arr[i]);
        
    }

    
}