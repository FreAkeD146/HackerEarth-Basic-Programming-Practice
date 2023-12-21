/* Here are the steps to implement:

1. Input the number of test cases (t).
2. Loop through each test case.
 - Initialize variables (sum1, sum2, ans) to zero.
 - Input values for g (gold price) and p (silver price).
 - Input the number of participants (n).
 - Input the scores for each participant into a 2D array (a).
 - Calculate total points for Team 1 (sum1).
 - Calculate total points for Team 2 (sum2).
 - Determine the minimum of sum1 and sum2 as the answer (ans).
 - Print the answer for the current test case.

This code seems to be calculating the total points for two teams based on gold and silver prices, given the scores of participants. The answer for each test case is the minimum of the total points for both teams.*/

#include<stdio.h>

int main() {
    int t, n, g, p, a[10][2], sum1, sum2, ans;

    // Input the number of test cases
    scanf("%d", &t);

    // Loop through each test case
    for(int i = 0; i < t; i++) {
        sum1 = sum2 = 0;

        // Input values for g (gold price) and p (silver price)
        scanf("%d%d", &g, &p);

        // Input the number of participants
        scanf("%d", &n);

        // Input the scores for each participant
        for(int j = 0; j < n; j++) {
            for(int k = 0; k < 2; k++)
                scanf("%d", &a[j][k]);
        }

        // Calculate total points for Team 1 (sum1)
        for(int j = 0; j < n; j++) {
            if(a[j][0] == 1)
                sum1 += g;
            if(a[j][1] == 1)
                sum1 += p;
        }

        // Calculate total points for Team 2 (sum2)
        for(int j = 0; j < n; j++) {
            if(a[j][0] == 1)
                sum2 += p;
            if(a[j][1] == 1)
                sum2 += g;
        }

        // Determine the minimum of sum1 and sum2 as the answer
        ans = (sum1 > sum2) ? sum2 : sum1;

        // Print the answer for the current test case
        printf("%d\n", ans);
    }

    return 0;
}
