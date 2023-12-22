/*Here are the steps to implement.

1. Declare variables to store input values.
2. Input the number of test cases (t).
3. Process each test case in a loop.
4. Input the value of n.
5. Find the highest power of 2 less than or equal to n.
6. Calculate the result based on the given conditions.
7. Print the result for the current test case.
8. Repeat for each test case.
9. Return 0, indicating successful execution.

This program performs a series of calculations for each test case based on the given conditions and prints the result.*/

#include <stdio.h>
#include <math.h>

int main() {
    // Declare variables to store input values
    unsigned long long int t;

    // Input the number of test cases
    scanf("%llu", &t);

    // Process each test case
    while (t--) {
        unsigned long long int k, n, ans, i;

        // Input the value of n
        scanf("%lld", &n);

        i = 1;

        // Find the highest power of 2 less than or equal to n
        while (i <= sqrt(n)) {
            i = i * 2;
        }

        // Calculate the result based on the conditions
        if (n / i >= i / 2)
            ans = n - n / i;
        else
            ans = (n - (i / 2)) + 1;

        // Print the result for the current test case
        printf("%lld\n", ans);
    }

    return 0;
}
