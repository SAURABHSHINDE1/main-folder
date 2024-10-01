#include<stdio.h>

int main() {

    int arr[3][3];

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }


    for(int i = 0; i < 3; i++) {
        for(int j =i+1; j < 3; j++) {
            int temp = arr[i] [j];
            arr[i] [j] = arr[j] [i];
            arr[j] [i] = temp;
            }
            printf("\n");
        }
        
    
      for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
           printf("%d ", arr[i][j]);
        }
        printf("\n");
    }



    return 0;

}