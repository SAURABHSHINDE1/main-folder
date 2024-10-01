#include<stdio.h>
int main()
{
//     int n,m,reverse=0;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     for(n=n ;n!=0 ; n/=10 )
//     {
//       m = n % 10;
//       reverse = reverse * 10 + m;
//     }
//     printf("The reverse of the number is: %d",reverse);

//  return 0;

// int n , i , j, k;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     printf("\n");
//     for(i=0; i<n; i++)
//     {
//       for(j=0; j<i; j++)
//       {
//         printf(" ");
//       }
//       for(k=0; k<n-i; k++)
//       {
//         printf("*");
//       }
//       printf("\n");
//     }

  int n, i , j,k;
  printf("Enter a number: ");
  scanf("%d",&n);
  printf("\n");
  for(i=0; i<n; i++)
  {
    for(j=0; j<i; j++)
    {
      printf(" ");
    }
    for(k=0; k<(n+4-2*i); k++)
    {
      printf("*");
    }
    printf("\n");
  }

}

