#include<stdio.h>

struct emp{
    int id;
    char name[10];
    int salary;
}e1,e2,e3;

int main()
{
    printf("Enter employee 1 details:\n");
    scanf("%d %s %d",&e1.id,&e1.name,&e1.salary);

    printf("Enter employee 2 details:\n");
    scanf("%d %s %d",&e2.id,&e2.name,&e2.salary);

    printf("Enter employee 3 details:\n");
    scanf("%d %s %d",&e3.id,&e3.name,&e3.salary);

    printf("\n1st Emp id: %d\nEmp name: %s\n Emp salary: %d\n\n",e1.id,e1.name,e1.salary);
    printf("\n2nd Emp id: %d\nEmp name: %s\n Emp salary: %d\n\n",e2.id,e2.name,e2.salary);
    printf("\n3rd Emp id: %d\nEmp name: %s\n Emp salary: %d\n\n",e3.id,e3.name,e3.salary);


    if(e1.salary > e2.salary || e1.salary >e3.salary)
    {
        printf("saurabh salary is greater than emp1 and emp2");
    }
    else if(e2.salary > e1.salary || e2.salary > e3.salary)
    {
        printf(" Rohit salary is greater than emp1 and emp3");
    }
    else{
        printf(" Abhishek salary is greater than emp1 and emp2");
    }
}