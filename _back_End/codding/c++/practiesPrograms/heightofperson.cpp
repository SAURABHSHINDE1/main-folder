#include<iostream>
using namespace std;
int main()
{
    int height;
    cout<<"Enter the height:";
    cin>> height;

    if(height < 190 && height > 161)
    {
        cout<<"Your a Toll person";
    }
    else if(height < 160 && height > 141)
    {
        cout<<"Your a medium height person";
    }

    else if(height <140 && height > 100 )
    {
        cout<<"your are a shot height person";
    }
    else{
        cout<< "Your height is too small";
    }
  
}