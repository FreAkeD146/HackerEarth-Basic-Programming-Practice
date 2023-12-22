/* Here are the steps to implement:

1. Declare a character array s to store the input string.
2. Read a string from input using scanf.
3. Declare variables i, l, j, and flag.
4. Calculate the length of the string using strlen.
5. Iterate through the string characters from both ends using a loop.
 - Check if characters at positions i and j are not equal. If not, print "NO" and return 0.
6. If the loop completes without finding non-matching characters, print "YES".
7. Return 0, indicating successful execution.

This program checks if a given string is a palindrome (reads the same forwards and backward) and prints "YES" or "NO" accordingly. */

#include <stdio.h>
#include <string.h>

int main() {
    // Declare a character array to store input
    char s[100];

    // Read a string from input
    scanf("%s", s);

    int i, l, j, flag = 0;

    // Calculate the length of the string
    l = strlen(s);

    // Iterate through the string characters from both ends
    for (i = 0, j = l - 1; i < j; i++, j--) {
        // Check if characters at positions i and j are not equal
        if (s[i] != s[j]) {
            printf("NO\n");
            return 0;
        }
    }

    // If the loop completes without finding non-matching characters, print "YES"
    printf("YES\n");

    return 0;
}
