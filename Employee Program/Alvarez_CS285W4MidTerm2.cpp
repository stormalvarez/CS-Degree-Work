/* Storm Alvarez
March 11, 2019
CS285 Week 4 Mid Term */

#include <iostream>
#include "Alvarez_CS285W4MidTerm.h"
#include "Alvarez_CS285W4MidTerm2.h"

salariedEmployee::salariedEmployee(std::string name, std::string department, std::string title, int hoursWorked, 
double hourlyRate, double annual, double grossPay, double taxAmount, double netPay) // Parametered constructor. 
{
    Employee::name = name;
    Employee::department = department;
    Employee::title = title;
    salariedEmployee::hoursWorked = hoursWorked;
    salariedEmployee::hourlyRate = hourlyRate;
    salariedEmployee::annual = annual;
    salariedEmployee::grossPay = grossPay;
    salariedEmployee::taxAmount = taxAmount;
    salariedEmployee::netPay = netPay;
}

void salariedEmployee::setAnnual(double Annual) // void function to set the annual salary.
{
    annual = Annual;
}

double salariedEmployee::getAnnual() // function to get the annual salary.
{
    annual = hoursWorked * hourlyRate * 52;
    return annual;
}

void salariedEmployee::setGrossPay(double gross) // void function to set gross pay.
{
    grossPay = gross;
}

double salariedEmployee::getGrossPay() // function to get the gross pay.
{
    grossPay = hoursWorked * hourlyRate;
    return grossPay;
}

void salariedEmployee::setTaxAmount(double TaxAmo) // void function setting the tax rate.
{
    taxAmount = TaxAmo;
}

double salariedEmployee::getTaxAmount() // function to get the tax rate. 
{
    return taxAmount;
}

void salariedEmployee::setNetPay(double net) // void function to set the net pay.
{
    netPay = net;
}

double salariedEmployee::getNetPay(double amount) // function to get the net pay.
{
    amount = grossPay * taxAmount;
    netPay = grossPay - amount;
    return netPay;
}

void salariedEmployee::print() // printing the data. 
{
    std::cout << "-------------------";
    std::cout << "\nEmployee Name: " << name;
    std::cout << "\nGross pay: $" << grossPay;
    std::cout << "\nEmployee tax rate: "<<taxAmount<<"%";
    std::cout << "\nTotal net pay: $" << netPay;
    std::cout << std::endl;
}
