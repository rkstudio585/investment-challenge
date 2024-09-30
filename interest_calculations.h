#ifndef INTEREST_CALCULATIONS_H
#define INTEREST_CALCULATIONS_H

// Function to calculate effective annual interest rate
double effective_annual_rate(double nominal_rate, int compounding_periods);

// Function to calculate future value with compound interest
double future_value(double principal, double nominal_rate, int compounding_periods, int years);

// Function to calculate present value from future value
double present_value(double future_value, double nominal_rate, int compounding_periods, int years);

// Function to calculate adjusted principal amount with fees
double adjusted_principal(double principal, double fees);

#endif // INTEREST_CALCULATIONS_H
