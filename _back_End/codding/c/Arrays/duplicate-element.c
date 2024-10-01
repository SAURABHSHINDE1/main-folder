#include<stdio.h>

int main(){

    int m,n;
    int arr[4][4];

    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d",&m,&n);


    printf("Enter the elements of the array:");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Here is your matrix:\n");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }


    return 0;
}