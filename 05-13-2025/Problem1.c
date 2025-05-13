// Problem:
// Write a program that reads two strings S and T. Check if string S contains string T.

// Note:
// String S is considered to contain string T if we can obtain string T by removing x left-most characters and y right-most characters out of S (x and y can be 0).
// If string S contains string T then output “True” else output “False”.
// Input Description: 
// String S
// String T

// Output Description: True or False

// Example:

// Input: abcde
// bcd
// Output: True


#include <stdio.h>
#include <string.h>

int main() {
    char S[1001], T[1001];

    // Read strings
    fgets(S, sizeof(S), stdin);
    fgets(T, sizeof(T), stdin);

    // Remove trailing newline characters
    size_t lenS = strlen(S);
    if (lenS > 0 && S[lenS - 1] == '\n') {
        S[lenS - 1] = '\0';
    }

    size_t lenT = strlen(T);
    if (lenT > 0 && T[lenT - 1] == '\n') {
        T[lenT - 1] = '\0';
    }

    // Check if T is a substring of S
    if (strstr(S, T) != NULL) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}




