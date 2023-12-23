#include <stdio.h>
#include <string.h>



int main() {
    char str1[100],re_str[100];
    
    gets(str1);
    

    // Remove newline character if present
    int n = strlen(str1);
    if (n > 0 && str1[n - 1] == '\n') {
        str1[n - 1] = '\0';
        n--;
    }

    for (int i = 0; i < n; i++) {
        re_str[n - i - 1] = str1[i];
    }
    re_str[n] = '\0'; // null-terminate the reversed string

    printf("%s",re_str);
    
}

