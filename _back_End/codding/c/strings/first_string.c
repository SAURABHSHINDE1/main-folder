#include<stdio.h>
int main()
{
    char str1[]="saurabh";
    char str2[]="saurabh";

    int flag=0;

    int size1 = sizeof(str1) / sizeof(char);
    int size2 = sizeof(str2) / sizeof(char);

    if(size1 == size2)
    {
        for( int i=0; i<= size1-1; i++)
        {
            if(str1[i] != str2[i])
            {
                flag=1;
                break;
            }
        }
    }
    else{
        flag=1;
    }
    
    if(flag == 0)
    {
        printf(" strings are equal");
    }
    else{
        printf(" strings are not equal");
    }


}