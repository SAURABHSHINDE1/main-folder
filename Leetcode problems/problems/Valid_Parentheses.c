#include<stdio.h>
#include<string.h>

int isValid(char *str) {
    while(str != '/0')
    {
         if(str =='(' && str ==")")
         {
            return 1;
         }
    }

    return 1;
   
}
int main()
{
    char str[]="([]))";

    int result = isValid(&str);

    if(result == 1)
    {
        printf("Valid");
    }
    else{
        printf("Invalid");
    }

}