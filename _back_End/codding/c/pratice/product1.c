#include<stdio.h>

int main()
{
   int a, b;
   float product,c;
   
   printf("Enter the value of a and b:-");      
   scanf("%d%d", &a, &b);
   product = (a * b) ;
   c = b/2; 
  if(product > b)
  {
    printf("\nThe product is greater  than half of the b\n");
  }
  else{
     printf("\nThe product is less  than half of the b\n");
  }

    return 0;
}