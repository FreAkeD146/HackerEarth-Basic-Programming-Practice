/* Hare are the steps to implement:

1. Declare integer variables l and n.
2. Input values for l and n using scanf.
3. Declare a 2D array arr to store dimensions.
4. Input dimensions into the array using nested loops.
5. Check and print the result for each dimension using a loop:
 - If both dimensions are equal and greater than or equal to l, print "ACCEPTED".
 - If dimensions are not equal and both are greater than or equal to l, print "CROP IT".
6. If any dimension is less than l, print "UPLOAD ANOTHER".
Return 0, indicating successful execution. */

#include <stdio.h>

int main() {
    int l, n;

    // Input the values for l and n
    scanf("%d\n%d", &l, &n);

    // Declare a 2D array to store dimensions
    int arr[n][2];

    // Input dimensions into the array
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Check and print the result for each dimension
    for (int i = 0; i < n; i++) {
        if ((arr[i][0] == arr[i][1]) && (arr[i][0] >= l)) {
            printf("ACCEPTED\n");
        } else if ((arr[i][0] != arr[i][1]) && (arr[i][0] >= l && arr[i][1] >= l)) {
            printf("CROP IT\n");
        } else if (arr[i][0] < l || arr[i][1] < l) {
            printf("UPLOAD ANOTHER\n");
        }
    }

    return 0;
}
