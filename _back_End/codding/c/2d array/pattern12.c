#include<stdio.h>

int main(){

    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
  

    for(int i = 0; i <= n; i++ ){
        for(int j = 0; j <= n; j++ ){
            if( i % 2==0){
                printf("12");
            }else{
                printf("21");
            }

        }
        printf("\n");
    }
    
    return 0;
    
}