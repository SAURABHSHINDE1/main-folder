#include <stdio.h>

int main() {
    int arr[3][3];
    printf("Enter the values of the first matrix:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int arr1[3][3];
    printf("Enter the values of the second matrix:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &arr1[i][j]);
        }
    }

    int arr3[3][3];

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            arr3[i][j] = arr[i][j] + arr1[i][j];
        }
    }

    printf("The sum of the two matrices is:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }

    return 0;
}