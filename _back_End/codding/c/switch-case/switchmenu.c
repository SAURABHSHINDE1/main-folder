#include<stdio.h>
int main()
{
    char menu;
    printf("Enter the value of menu:-");
    scanf("%c",&menu);
    switch(menu)
    {
        case 'a':
        printf("you have selected a Samosa");
        break;
        case 'b':
        printf("You have selected a Pizza");
        break;
        case 'c':
        printf("you have selected a coffiee");
        break;
        case 'd':
        printf("You have selected a burger");
        break;
        default:
        printf("Invalid choice");
        break;
    }
}