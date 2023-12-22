/* Here are the steps to implement":

1. Declare variables to store input values and results.
2. Input the total distance (d).
3. Input details for the Online Taxi (oc, of, od).
4. Input details for the Classic Taxi (cs, cb, cm, cd).
5. Calculate the cost for the Online Taxi (a).
6. Calculate the cost for the Classic Taxi (b).
7. Compare the costs and print the type of taxi based on the condition.
8. Return 0, indicating successful execution.

This program calculates the cost for Online Taxi and Classic Taxi based on given parameters and selects the type of taxi with the minimum cost.*/

#include<stdio.h>

int main() {
    // Declare variables to store input values
    long long int d, oc, of, od, cs, cb, cm, cd, a = 0, b = 0;

    // Input the total distance
    scanf("%lld", &d);

    // Input details for Online Taxi
    scanf("%lld %lld %lld", &oc, &of, &od);

    // Input details for Classic Taxi
    scanf("%lld %lld %lld %lld", &cs, &cb, &cm, &cd);

    // Calculate cost for Online Taxi
    a = oc + (d - of) * od;

    // Calculate cost for Classic Taxi
    b = cb + (d / cs) * cm + d * cd;

    // Compare costs and print the type of taxi
    if (a <= b) {
        printf("Online Taxi\n");
    } else {
        printf("Classic Taxi\n");
    }

    return 0;
}
