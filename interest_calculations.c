#include <stdio.h>
#include <math.h>
#include "interest_calculations.h"

// Function to calculate effective annual interest rate
double effective_annual_rate(double nominal_rate, int compounding_periods) {
    return pow(1 + (nominal_rate / compounding_periods), compounding_periods) - 1;
}

// Function to calculate future value with compound interest
double future_value(double principal, double nominal_rate, int compounding_periods, int years) {
    return principal * pow(1 + (nominal_rate / compounding_periods), compounding_periods * years);
}

// Function to calculate present value from future value
double present_value(double future_value, double nominal_rate, int compounding_periods, int years) {
    return future_value / pow(1 + (nominal_rate / compounding_periods), compounding_periods * years);
}

// Function to calculate adjusted principal amount with fees
double adjusted_principal(double principal, double fees) {
    return principal + fees;
}
