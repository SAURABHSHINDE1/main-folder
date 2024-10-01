#include<stdio.h>


int add( int a, int b){
     int result=a+b;
     printf("The result is:%d\n",result);
     return result;
}

int sub ( int a,int b){
    int Result=a-b;
    printf("the result is=%d\n",Result);
    return Result;
}


int mult(int a, int b){

    int multi=a*b;
    printf("the multiplication is:%d\n",multi);
    return multi;

}

float devide( float a, float b){
      float RESULT= a / b;
      printf(" the result is: %g\n",RESULT);
      return RESULT;
}

int main(){

    add(4 ,6);
    sub(33,77);
    mult(4,5);
   float division =  devide(33,4);
   printf("The division is: %g\n", division);
   return 0; 
}