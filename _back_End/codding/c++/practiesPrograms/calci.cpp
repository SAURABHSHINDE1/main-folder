#include<iostream>
using namespace std;
int main(){
    int choice;
    cout<<"Choose an operation:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n";
    cin>>choice;
    int a, b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    switch(choice){
        case 1:
            cout<<"Result: "<<a+b<<endl;
            break;
        case 2:
            cout<<"Result: "<<a-b<<endl;
            break;
        case 3:
            cout<<"Result: "<<a*b<<endl;
            break;
        case 4:
            if(b!=0){
                cout<<"Result: "<<a/b<<endl;
            }else{
                cout<<"Error: Division by zero."<<endl;
            }
            break;
        default:
            cout<<"Invalid choice."<<endl;
    }
    return 0;
}
