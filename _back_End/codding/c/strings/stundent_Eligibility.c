#include <stdio.h>

int main() {
    char str[30];
    int i;
    int p = 0, a = 0, l = 0;

    printf("Enter a Student Attendance (P/A/L): ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] == 'P' || str[i] == 'p')
        {
            p++;
        }
        else if (str[i] == 'A' || str[i] == 'a')
        {
            a++;
        }
         
        else if (str[i] == 'L' || str[i] == 'l')
        {
           
            l++;
        }
    }

    if (a>4 || l>5) 
    {
        printf("Student is not Eligible for Award\n");
    } 
    else if (a>3 && l>2)
    {
        printf("Student is not Eligible for Award\n");
    } 
    else if (a>2 && a>3) 
    {
        printf("Student is not Eligible for Award\n");
    } 
    else 
    {
        printf("Student is Eligible for Award\n");
    }

    return 0;
}