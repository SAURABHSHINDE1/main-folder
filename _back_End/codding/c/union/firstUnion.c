#include<stdio.h>
#include<string.h>

union student
{
    char name[15];
    int roll_no;
};

int main(){
    union student s;
    strcpy(s.name, "saurabh"); 
    printf("name:- %s\n",s.name);
    s.roll_no = 123;
    printf("roll no:- %d", s.roll_no);
    return 0;
}
