#include<stdio.h>
int main(){

int colum,i=1, j;
printf("Enter the number  columns:");
scanf("%d",&colum);

while( i<=colum)
{
   j=1;
    while(j <=i)
        {
            printf("*");
            j++;
        }
   i++;
   printf("\n");
}
}
