/* Here are the steps to implement"

1. Declare integer variables num, i, and a.
2. Read an integer from input and store it in the variable num.
3. Initialize i to 1 and a to 1.
4. Use a while loop to calculate the factorial of (num - 1).
 - In each iteration, multiply a by the current value of i and increment i.
 - Continue the loop until i is equal to or greater than num.
5. Print the result, which is num multiplied by the factorial of (num - 1).
6. Return 0, indicating successful execution.

This program calculates and prints the result of multiplying an integer num by the factorial of (num - 1). */
  
#include <stdio.h>

int main() {
    int num, i = 1, a = 1;

    // Read an integer from input
    scanf("%d", &num);

    // Use a while loop to calculate the factorial of (num - 1)
    while (i < num) {
        a = a * i;
        i++;
    }

    // Print the result, which is num multiplied by the factorial of (num - 1)
    printf("%d", num * a);

    return 0;
}
