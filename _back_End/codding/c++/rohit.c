#include<stdio.h>

int main()
{
    // for(int a=0;a<=10;a++)
    // {
    //     printf("%d \n",a);
    // }

// int a=0;

// while(a<=10)
// {
//     printf("%d \n",a);

//     a++;
// }
 
// int a=0;

// do{
//     printf("%d\n",a);


//     a++;
// } while(a<=10);

// int a=10;

// if (a == 11) {
//     printf("saurabh");
// } else if (a == 10) {
//     printf("abhishek");
// } else {
//     printf("rohit");
// }

//     return 0;
// }



#include <stdio.h>

int reverseDigits(int num)
{
    int rev_num = 0;
    while (num > 0) {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    return rev_num;
}

int main()
{
    int num = 4562;
    printf("Reverse of no. is %d", reverseDigits(num));
    getchar();
    return 0;
}