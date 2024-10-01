#include<stdio.h>

int main(){
    int n;

    printf("Enter the value of n: ");
    scanf("%d",&n);

    for( int i = 1; i <= n; i++)
    {
      for( int j = i; j<=n; j++){
        printf("%d",j);
      }
      for( int k=1; k<=i-1; k++){
        printf("%d",k);
      }
      printf("\n");
    }
    return 0;
}