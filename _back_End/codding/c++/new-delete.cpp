#include<iostream>
using namespace std;

int main(){

     int *ptr[5];
     cout<<"Enter the array:";
    for(int i = 0 ; i < 5 ; i++){
        ptr[i] = new int;
        cin>>*ptr[i];
    }

    int max =*ptr[0];
     int min = *ptr[0];

    for(int i =0 ; i < 5 ; i++){

        if(*ptr[i] < min){
            min = *ptr[i];
        }

        if(*ptr[i] > max){
            max = *ptr[i];  
        }
    }

    cout << "Maximum: " << max << endl;

    cout << "Minimum: " << min << endl;


     
}