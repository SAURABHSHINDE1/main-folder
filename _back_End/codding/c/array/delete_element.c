#include<stdio.h>
int main(){
    int a[6]={1,2,3,4,5,6};
    int i;
    int k=4;
    int n=sizeof(a) / sizeof(a[0]);
    int j=n;
    while(j>k){
        a[k] = a[k+1];
        k++;
    }
    for(i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    return 0;
 
}