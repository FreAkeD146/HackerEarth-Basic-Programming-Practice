/* Here are the steps to implement:

1. Declare integer variables l, r, k, and count.
2. Input values for l, r, and k using scanf.
3. Use a for loop to iterate through the range from l to r (inclusive).
 - Check if the current number i is divisible by k.
 - If divisible, increment the count and optionally increment l (this step seems to be part of the original logic).
 - If not divisible, continue to the next iteration.
4. Print the final value of count.
5. Return 0, indicating successful execution.*/

#include <stdio.h>

int main() {
    int l, r, k, count = 0;

    // Input values for l, r, and k
    scanf("%d %d %d", &l, &r, &k);

    // Iterate through the range from l to r (inclusive)
    for (int i = l; i <= r; i++) {
        // Check if the current number is divisible by k
        if (i % k == 0) {
            count++; // Increment the count if divisible
            l++;     // Increment l (optional, as it seems to be part of the original C++ logic)
        } else {
            continue; // Continue to the next iteration if not divisible
        }
    }

    // Print the final count
    printf("%d", count);

    return 0;
}
