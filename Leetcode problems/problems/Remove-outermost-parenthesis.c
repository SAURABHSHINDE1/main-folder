#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* removeOuterParentheses(char* s) {
    int len = strlen(s);
    char* ans = (char*)malloc(len + 1); 
    int index = 0, depth = 0;

    for (int i = 0; i < len; i++) {
        if (s[i] == '(') {
            if (depth > 0) { 
                ans[index++] = s[i];
            }
            depth++;
        } else if (s[i] == ')') {
            depth--;
            if (depth > 0) {  
                ans[index++] = s[i];
            }
        }
    }

    ans[index] = '\0';
    return ans;
}

int main() {
    char s[] = "(()())(())";

    char* result = removeOuterParentheses(s);
    
    printf("Answer: %s\n", result);
    return 0;
}
