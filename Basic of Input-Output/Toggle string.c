/* Here are the steps to implement:

Declare a character array (a) to store the input string.
Input the string.
Get the length of the string (l).
Iterate through each character in the string.
Check if the current character is uppercase using isupper().
If uppercase, print the corresponding lowercase character using tolower().
If lowercase, print the corresponding uppercase character using toupper().
The code essentially converts the case of each character in the input string and prints the modified string. */

#include <stdio.h>
#include <string.h>

int main() {
    // Declare a character array to store the input string
    char a[1000];

    // Input the string
    scanf("%s", a);

    // Get the length of the string
    int l = strlen(a);

    // Iterate through each character in the string
    for (int i = 0; i < l; i++) {
        // Check if the character is uppercase
        if (isupper(a[i])) {
            // Print the corresponding lowercase character
            printf("%c", tolower(a[i]));
        } else {
            // Print the corresponding uppercase character
            printf("%c", toupper(a[i]));
        }
    }

    return 0;
}
