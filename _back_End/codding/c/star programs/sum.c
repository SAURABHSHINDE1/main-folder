#include<stdio.h>
#include<limits.h>


int main() {

    int arr[100];

    int n;

    printf("ENter the size of the array: ");
    scanf("%d", &n);


    printf("Now enter the elements: ");

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    for(int i = 0; i < n; i++) {
        printf("%d \n", arr[i]);
    }




    int sum = 0; 

    for(int i = 0; i < n; i++) {
        sum = sum + arr[i];
    }

    printf("The sum is: %d\n", sum);



    int avg = sum / n;

    printf("THe average is: %d\n", avg);


    int min = __INT_MAX__;

    for(int i = 0; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    printf("The minimum number is: %d\n", min);

    int max = INT_MIN;

    for(int i = 0; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    printf("The maximum number is: %d\n", max);

    return 0;
}