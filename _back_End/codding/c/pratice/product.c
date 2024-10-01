#include<stdio.h>

int main()
{
  int num;
  int product=1;
  

  printf("Enter the value of num:");
  scanf("%d",&num);

   while(num>0)
   {
     int result=num%10;
    product=product*result;
    num=num/10;
  
   }

    printf("%d",product); 

    return 0;
}