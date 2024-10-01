#include<stdio.h>
int main()
    {
      char str1[]="saurabh";
      char str2[]="shinde";
      char add[16];
      int i,j;

      for( i=0; str1[i] != '\0'; i++)
      {
        add[i]= str1[i] ;
        
      }  
      add[i]=' ';

    for(j=0; str2[j] != '\0'; j++)
    {
        add[j+i+1] = str2[j];
    }

    printf("%s\n",add);
      
    }
