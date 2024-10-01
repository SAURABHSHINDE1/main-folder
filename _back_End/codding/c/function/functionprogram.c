#include<stdio.h>

int factorial( int n ){

    int fact=1;
      for(int i=1;i<=n; i++)
    {
       fact*=i;
       
    }
     return fact;
}


int main(){
int result=factorial(5);

printf("The factorial is:%d\n",result);

        return 0;
}
