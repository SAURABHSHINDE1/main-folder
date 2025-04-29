#include<iostream>
using namespace std;
int main(){
    int n = 5;
    // cout<<"Enter a number between 1 to 7: ";
    // cin>>n;
    switch(n){
        case 1:
            cout<<"Monday"<<endl;
            break;
        case 2:
            cout<<"tuesday"<<endl;
            break;
        case 3:
            cout<<"Wednesday"<<endl;
            break;
        case 4:
            cout<<"Thursday"<<endl;
            break;
            case 5:
            cout<<"Friday"<<endl;
            break;
        case 6:
            cout<<"saturday:"<<endl;
            break;
            case 7:
            cout<<"sunday"<<endl;
            break;
        default:
            cout<<"Invalid input"<<endl;
            break;
    
    }
    return 0;
}
