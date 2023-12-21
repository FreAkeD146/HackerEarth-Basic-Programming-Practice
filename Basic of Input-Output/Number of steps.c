/* Here are the steps to implement:

1. Input the size of the arrays (n).
2. Input values for the first array.
3. Input values for the second array.
4. Initialize variables for the minimum value, count, and loop index.
5. Outer loop: Iterate until the end of the array is reached.
 - Inner loop: Reduce the value in the first array until it's not greater than the current minimum. Increment the count for each reduction.
 - Check if the current value in the first array is less than the --current minimum. Update the minimum value and reset the loop index to the beginning.
 - Check if the current value in the first array is negative. Set count to -1 and exit the loop.
 - If the current value is within the minimum and not negative, move to the next index.
6. Print the final count value.

This code seems to be performing some operation on two arrays and counting the number of reductions made to make the values in the first array less than or equal to the corresponding values in the second array. If there's anything specific you want to know or if you have further questions, feel free to ask!
*/

#include <stdio.h>

int main() {
    // Declare a variable to store the size of the arrays
    int n;
    scanf("%d", &n);

    // Declare and input values for the first array
    int first_array[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &first_array[i]);
    }

    // Declare and input values for the second array
    int second_array[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &second_array[i]);
    }

    // Initialize variables for tracking the minimum value, count, and loop index
    int min_val = first_array[0];
    int count = 0;
    int i = 0;

    // Outer loop: Continue until the end of the array is reached
    while (i < n) {
        // Inner loop: Reduce the value in the first array until it's not greater than the current minimum
        while (first_array[i] > min_val) {
            first_array[i] -= second_array[i];
            count++;  // Increment the count for each reduction
        }

        // Check if the current value in the first array is less than the current minimum
        if (first_array[i] < min_val) {
            min_val = first_array[i];  // Update the minimum value
            i = 0;  // Reset the loop index to the beginning
        } 
        // Check if the current value in the first array is negative
        else if (first_array[i] < 0) {
            count = -1;  // Set count to -1 to indicate an invalid condition
            break;  // Exit the loop
        } 
        // If the current value is within the minimum and not negative, move to the next index
        else {
            i++;
        }
    }

    // Print the final count value
    printf("%d\n", count);

    return 0;
}
