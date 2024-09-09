#include <iostream>

int main() {
    double revenue, countyTaxRate, stateTaxRate;
    double countyTax, stateTax, totalTax, netIncome;

    revenue = 95000;
    stateTaxRate = 0.04;
    countyTaxRate= 0.02;

    countyTax = revenue * countyTaxRate;
    stateTax = revenue * stateTaxRate;

    totalTax = countyTax + stateTax;


    netIncome = revenue - totalTax;

    std:: cout << "Your revenue before taxes was $" << revenue << std::endl;
    std:: cout << "The total taxes you paid is $" << totalTax << std::endl;
    std:: cout << "$" << totalTax << " is a sum of your State Tax: $" << stateTax << " and, \nCounty Tax: $" << countyTax << std::endl;
    std:: cout << "After taxes the net income is $" << netIncome << std::endl;

    return 0;
}