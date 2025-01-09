#include<stdio.h>
struct student{
    int marks;
}s1;
int main()
{                               
    int i,sum=0;
    float per=0;
    for(i =1; i < 5; i++)
    {
        printf("student %d sub mark:-", i);
        scanf("%d", &s1.marks);
        sum += s1.marks;
    }

     per = sum*100/500;

    printf("The sum of all marks is %d ",sum);
    printf("\nThe average of all marks is %.2f", per);
} 