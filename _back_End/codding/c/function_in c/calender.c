#include<stdio.h>
#include<stdlib.h>

int get_1st_weekday(int year){

  int d;
  d = (((year - 1) * 365) + ((year - 1) / 4) - ((year - 1) / 100) + ((year) / 400) + 1) % 7;
  return d;
}
int main()
{   
    // system("color 2f");
    int year1,day,dayInMonth,weekDay=0,startingDay;
    printf("Enter the year: ");
    scanf("%d",&year1);
    char month[12][10]= {"January","February","March","April","May","Junr","July","August","September","October","November","December"};

    int monthday[]={31,28,31,30,31,30,31,31,30,31,30,31};

    if((year1 % 4==0 && year1%100 != 0 )||year1%400==0)
        {
            monthday[1]=29;
        }
   
    startingDay=get_1st_weekday(year1);
    printf("Starting Day = %d\n",startingDay);
    
   for(int i=0;i<12;i++){

      dayInMonth=monthday[i];
      printf("\n\n---------------%s-------------------\n",month[i]);
      printf("\n  Sun  Mon  Tue  Wed  Thurs  Fri  Sat\n");

      for(weekDay=0;weekDay<startingDay;weekDay++)
    //  printf("\nweekday=%d\n",weekDay);
        printf("     ");

      for(day=1;day<=dayInMonth;day++){
        printf("%5d",day);
        weekDay++;
        if(weekDay>6){
            printf("\n");
            weekDay=0;
        }
        startingDay=weekDay;
        
      }
     // printf("\nstarting day = %d\n",startingDay);
     // printf("\nWeekday = %d\n",weekDay);

   }


}