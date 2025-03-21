// #include<stdio.h>

// int plus_One(int digit[],int size)
// {
//     int number=0,result=0;

//      for(int i =0; i < size; i++)
//      {
//          number = number *10+digit[i];
         
//      }

//     // return number+1;

//     int temp = number;
//     int digits = 0;
//     while (temp != 0) {
//         temp /= 10;
//         digits++;
//     }
    

//     int arr[digits];
    

//     for (int i = digits - 1; i >= 0; i--) {
//         arr[i] = number % 10; 
//         number /= 10;          
//     }
    
//     // Display the array
//     printf("Array of digits: ");
//     for (int i = 0; i < digits; i++) {
//         printf("%d ", arr[i]);
//     }
// }

// int main()
// {
//      int digits[]={1,2,3};
//      int n = sizeof(digits) / (sizeof(int));
 
//     // int result = plus_One(digits,n) ;   
//     // printf("%d ", result);

//      plus_One(digits,n);
// }




#include <stdio.h>
#include <stdlib.h>

int* plus_One(int digit[], int size, int* returnSize) {
    int carry = 1; // Start with 1 because we're adding one to the number
    int* result = (int*)malloc((size + 1) * sizeof(int)); // Allocate for the worst case (size + 1)
    int i;

    for (i = size - 1; i >= 0; i--) {
        int sum = digit[i] + carry;
        result[i + 1] = sum % 10; // Store result digit
        carry = sum / 10;         // Calculate carry
    }

    if (carry) {
        // If there's still a carry, shift digits and add it to the front
        result[0] = 1;
        *returnSize = size + 1;
    } else {
        // Otherwise, just return the existing digits
        for (i = 0; i < size; i++) {
            result[i] = result[i + 1];
        }
        *returnSize = size;
    }

    return result;
}

int main() {
    int digits[] = {9, 9, 7}; 
    int n = sizeof(digits) / sizeof(int);
    int returnSize;

    int* result = plus_One(digits, n, &returnSize);

    // Print the result array
    printf("Array after increment: ");
    for (int i = 0; i < returnSize; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    free(result); // Free the dynamically allocated memory
    return 0;
}
