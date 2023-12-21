/* Here are the steps to implement:

1. Declare a character array (tag) to store the input tag.
2. Input the tag.
3. Check conditions for a valid tag:
 - Check if the sum of the ASCII values of the first two characters is even.
 - Check if the sum of the ASCII values of the third and fourth characters is even.
 - Check if the sum of the ASCII values of the fifth and sixth characters is even.
 - Check if the sum of the ASCII values of the seventh and eighth characters is even.
 - Check if the third character is not a vowel (A, E, I, O, U, Y).
4. Output "valid" if all conditions are met, otherwise output "invalid".

This code seems to validate a tag based on specific conditions related to the sum of ASCII values and the third character not being a vowel. */ 

#include <stdio.h>

int main() {
    // Declare a character array to store the input tag
    char tag[9];

    // Input the tag
    scanf("%s", tag);

    // Check the conditions for a valid tag
    if ((tag[0] + tag[1]) % 2 == 0 &&
        (tag[3] + tag[4]) % 2 == 0 &&
        (tag[5] + tag[6]) % 2 == 0 &&
        (tag[7] + tag[8]) % 2 == 0 &&
        !((tag[2] == 'A' || tag[2] == 'E' || tag[2] == 'I' || tag[2] == 'O' || tag[2] == 'U' || tag[2] == 'Y'))) {
        // Output "valid" if all conditions are met
        printf("valid");
    } else {
        // Output "invalid" if any condition is not met
        printf("invalid");
    }

    return 0;
}
