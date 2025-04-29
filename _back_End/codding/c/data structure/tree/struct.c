#include<stdio.h>
struct Name_Of_student{
    int rollno;
    char name;
    char TeachersName;

}s1,s2,s3;
void main()
{
    s1.rollno=10;
    s1.name='s';
    s1.TeachersName='d';
    printf("name %c \n",s1.name);
    printf("roll number %d \n",s1.rollno);
    printf("TeachersName %c \n",s1.TeachersName);
    s2.rollno=5;
    s2.name='R';
    s2.TeachersName='b';
    printf("name %c \n",s2.name);
    printf("roll number %d \n",s2.rollno);
    printf("TeachersName %c \n",s2.TeachersName);
    
    
}