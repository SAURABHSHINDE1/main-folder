#include<stdio.h>
int main()
{
    FILE *file;
    file = fopen("saurabh.txt","w");
    if(file == NULL)
    {
         printf("The file is not created");
    }
    else{
        printf("The file is created");
    }

    fprintf(file,"name:- saurabh shinde\n Age:- 19 \n address:- loni \n contact no:- 7020539971 \n \n \n name:- Rohit Supekar \n age:-19 \n address:- loni \n contact no:- 8421756593");
    fclose(file);

    return 0;
}