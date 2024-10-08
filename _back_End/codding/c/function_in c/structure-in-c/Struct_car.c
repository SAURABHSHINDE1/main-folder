#include<stdio.h>

struct car
{
    int car_id;
    char car_model[10];
    int rent_perday;
}c1,c2,c3;
int main()
{
    printf("Enter 1st car details:\n");
    scanf("%d %s %d",&c1.car_id,&c1.car_model,&c1.rent_perday);

    printf("\nEnter 2nd car details:\n");
    scanf("%d %s %d",&c2.car_id,&c2.car_model,&c2.rent_perday);

    printf("\nEnter the 3rd car details:\n");
    scanf("%d %s %d",&c3.car_id,&c3.car_model,&c3.rent_perday);

    printf("\nFirst car:");
    printf("\n%d %s %d",c1.car_id,c1.car_model,c1.rent_perday);

    printf("\nSecond car:\n");
    printf("\n%d %s %d",c2.car_id,c2.car_model,c2.rent_perday);

    printf("\nThird car:\n");
    printf("\n%d %s %d",c3.car_id,c3.car_model,c3.rent_perday);

     int total_rent;

     int day1,day2,day3;
     printf("\nEnter the value if day1,day2,day3: ");
     scanf("%d%d%d",&day1,&day2,&day3);

     printf("\nTotal rent of %s is %d",c1.car_model,c2.rent_perday*day1);
     printf("\nTotal rent of %s is %d",c2.car_model,c2.rent_perday*day2);
     printf("\nTotal rent of %s is %d",c2.car_model,c2.rent_perday*day3);

     
     total_rent=c1.rent_perday*day1+c2.rent_perday*day2+c3.rent_perday*day3;
     printf("Total rent = %d",total_rent);
     




}