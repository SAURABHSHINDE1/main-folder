#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    int i;
    cout<<"Enter array elements:";
    for(i = 0 ; i < 5 ; i++)
    {
        cin>>arr[i];
    }

    int min = arr[0];
    int max  = arr[0];

    for(i = 0; i < 5; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    for(i = 0; i < 5; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }

    cout<<"minmum element of array:"<<min<<endl;
    cout<<"maximun element of array:"<<max<<endl;
} 