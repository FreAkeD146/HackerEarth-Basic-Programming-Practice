/* Here are the Steps to implement

1. Declare variables:
 - n: size of the array.
 - prod: to store the product of array elements.
 - d: modulo value, initialized to the result of pow(10, 9) + 7.
2. Input the size of the array (n).
3. Declare an integer array arr of size n.
4. Input elements into the array and calculate the product modulo d:
 - Use a loop to iterate from 1 to n.
 - Read each element into arr[i] and update prod by multiplying it with the element and taking the modulo d.
5. Print the final product modulo d.
6. Return 0, indicating successful execution.

This program takes the size of an array, reads the elements into the array, calculates their product, and prints the product modulo a specified value d.*/

#include <stdio.h>
#include <math.h>

int main() {
    // Declare variables
    int n;
    long long prod = 1;
    int d = ((int)pow(10, 9) + 7); // or you can take 1000000007

    // Input the size of the array
    scanf("%d", &n);

    int arr[n];

    // Input elements into the array and calculate the product modulo d
    for (int i = 1; i <= n; i++) {
        scanf("%d ", &arr[i]);
        prod = (prod * arr[i]) % d;
    }

    // Print the final product modulo d
    printf("%lld", prod);

    return 0;
}
