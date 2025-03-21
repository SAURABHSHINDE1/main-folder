#include <stdio.h>
#include <string.h>
#include <ctype.h>

void clearDigits(char* s) {
    int len = strlen(s);
    char stack[len + 1];
    int top = -1;
    
    for (int i = 0; i < len; i++) {
        if (isdigit(s[i])) {
            // If the stack is not empty, pop the previous character
            if (top != -1) {
                top--;
            }
        } else {
            // If it's not a digit, push the character onto the stack
            stack[++top] = s[i];
        }
    }

    // Null-terminate the stack as the result string
    stack[top + 1] = '\0';
    
    // Copy the result back to the input string
    strcpy(s, stack);
}

int main() {
    char s[] = "cb34";
    
    clearDigits(s);
    
    printf("Resulting string: %s\n", s);  // Output: ""
    
    return 0;
}