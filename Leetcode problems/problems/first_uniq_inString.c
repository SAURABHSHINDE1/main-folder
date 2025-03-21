#include<stdio.h>

int firstUniqChar(char *s)
{
    int i=0,charcount[20]={0};

   for(i = 0; s[i]<='\0'; i++)
   {
        charcount[s[i] - 'a']++;
   }

   for (int i = 0; s[i] != '\0'; i++) {
        if (charcount[s[i] - 'a'] == 1) {
            return i;
        }
    }

   return -1;
}

int main()
{
    char *str ="LeeLtcode";

    int result=firstUniqChar(str);

    if(result != -1)
    {
        printf("it is unique string");
    }
    else{
        printf("str not unique");
    }
}


