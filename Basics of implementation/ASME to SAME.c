/* Steps to implement

1. Declare variables for the number of test cases (t), size of strings (n), and result (res).
2. Input the number of test cases.
3. Process each test case in a loop.
4. Input the size of strings (n).
5. Declare character arrays a and b to store strings.
6. Input strings a and b.
7. Declare a character array res to store the result.
8. Initialize a counter c for counting '?' characters.
9. Iterate through each character in string a.
10. Check if the character is '?'. If yes, increment the counter c.
11. If the character is not '?', find its position in string b.
12. If found, remove the character from string b. If not found, set the result to "No" and break the loop.
13. Print the result for the current test case.
14. Return 0, indicating successful execution.

This program checks if strings can be transformed based on certain conditions and prints the result for each test case. */

#include <stdio.h>
#include <string.h>

int main() {
    int t;

    // Input the number of test cases
    scanf("%d", &t);

    // Process each test case
    while (t--) {
        int n;

        // Input the size of strings
        scanf("%d", &n);

        char a[n + 1], b[n + 1];

        // Input strings 'a' and 'b'
        scanf("%s %s", a, b);

        char res[] = "Yes";
        int c = 0;

        // Iterate through each character in string 'a'
        for (int i = 0; i < n; i++) {
            if (a[i] == '?') {
                c++;
            } else {
                // Find the position of 'a[i]' in string 'b'
                char *found = strchr(b, a[i]);
                if (found != NULL) {
                    // Remove the character from string 'b'
                    memmove(found, found + 1, strlen(found + 1) + 1);
                } else {
                    strcpy(res, "No");
                    break;
                }
            }
        }

        // Print the result for the current test case
        printf("%s\n", res);
    }

    return 0;
}
