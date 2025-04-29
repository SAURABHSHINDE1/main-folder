#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<5;i++){
        sum+=arr[i];
    }
    cout<<"The sum of the array is: "<<sum<<endl;

    return 0;

}