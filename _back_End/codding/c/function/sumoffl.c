#include<stdio.h>

int sumofFL(int num){
    int sum=0;

    int rem=num%10;

    int first=num;

    while (first>=10)
    {
        first=first/10;
       
    }
    
   sum=first+rem;
   printf("%d\n", sum);
}








int main(){



sumofFL(1234);


    return 0;
}