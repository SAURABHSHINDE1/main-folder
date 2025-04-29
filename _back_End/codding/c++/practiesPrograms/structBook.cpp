#include<iostream>
using namespace std;

struct Book{
    string title;
    string author;
    int price;
}b1,b2,b3;
int main()
{
    cout<<"Enter The First book details:"<<endl;
    cout<<"Enter the title of the book:";
    cin>>b1.title;
    cout<<"Enter the author of the book:";
    cin>>b1.author;
    cout<<"Enter the price of the book:";
    cin>>b1.price;

    cout<<"Enter The Second book details:"<<endl;
    cout<<"Enter the title of the book:"<<endl;
    cin>>b2.title;
    cout<<"Enter the author of the book:"<<endl;
    cin>>b2.author;
    cout<<"Enter the price of the book:"<<endl;
    cin>>b2.price;

    cout<<"Enter The Third book details:"<<endl;
    cout<<"Enter the title of the book:"<<endl;
    cin>>b3.title;
    cout<<"Enter the author of the book:"<<endl;
    cin>>b3.author;
    cout<<"Enter the price of the book:"<<endl;
    cin>>b3.price;

    if(b1.price > b2.price && b1.price > b3.price)
    {
        cout<<"First book is most expensive"<<endl;
        cout<<"title:"<<b1.title<<endl;
        cout<<"Author:"<<b1.author<<endl;
        cout<<"price:"<<b1.price<<endl;
    }
    else if(b2.price > b1.price && b2.price > b3.price)
    {
        cout<<"Second book is most expensive"<<endl;
        cout<<"title:"<<b2.title<<endl;
        cout<<"Author:"<<b1.author<<endl;
        cout<<"price:"<<b1.price<<endl;
    }
}