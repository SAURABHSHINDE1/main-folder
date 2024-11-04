#include<stdio.h>
int main(){
    int a[5]={7,2,1,6,4};
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n-1;i++){
        if(a[i] < a[i+1])
        {
            a[i+1]=a[i];
        }

        for(int j=0; j<n; j++){
            printf("%d ", a[j]);
        }
        printf("\n");
    }
}