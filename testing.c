#include <stdio.h>

int main() {
    double principal, rate, time, interest;

    // enter principal amount, rate, and time

    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    printf("Enter the annual interest rate (as a decimal): ");
    scanf("%lf", &rate);

    printf("Enter the time (in years): ");
    scanf("%lf", &time);

    // Calculate simple interest
    interest = principal * rate * time;

    // show result
    printf("Simple Interest = %.2lf\n", interest);

    return 0;
}
