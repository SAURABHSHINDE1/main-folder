#include <stdio.h>

int main() {
    FILE *file;
    file = fopen("saurabh.txt", "r"); 
    char data[100]; 
    int count = 0;

    if (file == NULL) {
        printf("The file could not be opened.\n");
       
    } else {
        printf("The file is opened successfully.\n");
    }

    while (fgets(data, sizeof(data), file) != NULL) {
        printf("Data read from the file: %s", data);
        count++; 
    }

 
        printf("\nThe number of lines in the file is: %d\n", count);

    fclose(file); 
    return 0; 
}