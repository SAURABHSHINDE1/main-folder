#include <stdio.h>
#include <ctype.h>
#include <string.h>

char* removeStringIfDigit(char* s) {

    int len = strlen(s);
    for (int i = 0; s[i] != '\0'; i++) {
        if (isdigit(s[i])) {
            s[0] = '\0';
            return s;
        }
       
    }

    for (int i = len; s[i] != 0; i--) {
        if (isdigit(s[i])) {
            s[0] = '\0';
            return s;
        }
    }
    return s; 
}

int main() {
    char str[] = "hello1sa";
    

    printf("answer: \"%s\"\n", removeStringIfDigit(str));

    return 0;
}
