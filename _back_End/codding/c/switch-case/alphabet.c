#include<stdio.h>
int main()
{
    char alphabet;
    printf("Enter an alphabet: ");
    scanf("%c", &alphabet);

    switch(alphabet)
    {
        case 'a' ... 'e':
        printf("The alphabet is  between a and e.\n");
        break;

        case 'f' ... 'j':
        printf("The alphabet is  betwee f and j.\n");
        break;

        case 'k' ... 'o':
        printf("The alphabet is  betwee k and o.\n");
        break;

        case 'p' ... 't':
        printf("The alphabet is  betwee p and t.\n");
        break;

        case 'u' ... 'z':
        printf("The alphabet is  betwee u and z.\n");
        break;

        default:
        printf("invalid alphabet.\n");
        break;
        
    }
}