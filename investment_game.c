#include <stdio.h>
#include <stdlib.h>
#include "interest_calculations.h"

int main() {
    double principal;
    double nominal_rate;
    int compounding_periods = 4; // Quarterly compounding
    int years;
    double future_value_goal;
    
    printf("Welcome to the Investment Challenge! 🎉\n");
    
    // Get the initial principal from the player
    printf("Enter your starting amount ($): ");
    scanf("%lf", &principal);
    
    // Get the nominal interest rate
    printf("Enter the nominal interest rate (e.g., 0.06 for 6%%): ");
    scanf("%lf", &nominal_rate);
    
    // Get the number of years for the investment
    printf("Enter the number of years you want to invest: ");
    scanf("%d", &years);
    
    // Get the future value goal
    printf("What future value do you want to achieve ($): ");
    scanf("%lf", &future_value_goal);
    
    // Calculate the future value
    double future_val = future_value(principal, nominal_rate, compounding_periods, years);
    
    // Display results
    printf("\nCalculating...\n");
    printf("After %d years, your investment of $%.2f will grow to: $%.2f\n", years, principal, future_val);
    
    // Check if the player has achieved their goal
    if (future_val >= future_value_goal) {
        printf("Congratulations! 🎉 You have achieved your goal of $%.2f!\n", future_value_goal);
    } else {
        printf("Unfortunately, you did not reach your goal of $%.2f. Keep investing wisely!\n", future_value_goal);
    }
    
    return 0;
}
