#include<stdio.h>

struct Student{
    char name[10];
    int age;
    int height;
    char gender[10];
}s1,s2;

int main(){
    printf("Enter student 1 details:\n");
    printf(" Enter Name: ");
    scanf("%s", &s1.name);
    printf("Enter Age: ");
    scanf("%d", &s1.age);
    printf(" Enter Height: ");
    scanf("%d", &s1.height);
    printf(" Enter Gender: ");
    scanf("%s", &s1.gender);

    

    printf("\nEnter student 2 details:\n");
    printf("Enter Name: ");
    scanf("%s", &s2.name);
    printf("Enter Age: ");
    scanf("%d", &s2.age);
    printf("Enter Height: ");
    scanf("%d", &s2.height);
    printf("Enter Gender: ");
    scanf("%s", &s2.gender);

    printf("\nName: %s \nAge: %d\nHeight: %d\nGender %s\n",s1.name,s1.age,s1.height,s1.gender);

     printf("\nName: %s \nAge: %d\nHeight: %d\nGender %s",s2.name,s2.age,s2.height,s2.gender);   


     if(s1.age > s2.age)
     {
         printf("\n\nStudent 1 is bigger than Student 2");
     }
     else if(s1.age == s2.age)
     {
         printf("\n\nStudent are Equal in age ");
     }
     else{
         printf("\n\nStudent 2 is bigger than Student 1");
     }
}
