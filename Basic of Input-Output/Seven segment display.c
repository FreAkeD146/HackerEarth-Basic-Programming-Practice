/* Here are the steps to implement:

1. Input the number of test cases (num).
2. Loop through each test case.
 - Input the word for the current test case (word).
 - Initialize variables (sticks, size) for counting sticks and determining the size of the word.
 - Calculate the total number of sticks needed for the word based on the given switch-case statements.
 - Output the representation of sticks based on whether the total number of sticks is even or odd.

This code seems to take a word as input and calculates the number of sticks needed to represent each digit in the word. It then outputs a representation of sticks based on the total number of sticks. */

#include <stdio.h>

int main() {
    int num;
    
    // Input the number of test cases
    scanf("%d", &num);

    long long number;
    long long sticks;
    char word[101];
    int size;

    // Loop through each test case
    for (int i = 0; i < num; i++) {
        // Input the word for the current test case
        scanf("%s", word);

        sticks = 0;
        size = strlen(word);

        // Calculate the total number of sticks needed for the word
        for (int k = 0; k < size; k++) {
            switch (word[k]) {
                case '0':
                case '6':
                case '9':
                    sticks += 6;
                    break;
                case '1':
                    sticks += 2;
                    break;
                case '2':
                case '3':
                case '5':
                    sticks += 5;
                    break;
                case '4':
                    sticks += 4;
                    break;
                case '7':
                    sticks += 3;
                    break;
                case '8':
                    sticks += 7;
                    break;
            }
        }

        // Output the representation of the sticks
        if (sticks % 2 == 0) {
            for (long long j = 0; j < sticks / 2; j++) {
                printf("1");
            }
            printf("\n");
        } else {
            printf("7");
            for (long long j = 1; j < sticks / 2; j++) {
                printf("1");
            }
            printf("\n");
        }
    }

    return 0;
}
