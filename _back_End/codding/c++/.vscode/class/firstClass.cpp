#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int rollno;

    void display_data(){
        cout<<"Name:"<<name<<endl;
        cout<<"Roll No:"<<rollno<<endl;
    }
}; 

class teacher{
    public:
    string name;
    int id;

    void display_data(){
        cout<<"Name:"<<name<<endl;
        cout<<"ID:"<<id<<endl;
    }
};

int main(){
    student s1; 
    s1.name = "saurabh";
    s1.rollno = 101;
    s1.display_data();

    teacher t1;
    t1.name = "kiran sir";
    t1.id = 102;
    t1.display_data();
}