#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"enter the elements of the array: ";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }


    int arr2[5];
    for(int i=0;i<5;i++){
        arr2[i]=arr[i];
    }

    
    cout<<"The elements of the copied array are: ";
    for(int i=0;i<5;i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;

    return 0;
}