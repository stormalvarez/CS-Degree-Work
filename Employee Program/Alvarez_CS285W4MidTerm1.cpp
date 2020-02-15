/* Storm Alvarez
March 11, 2019
CS285 Week 4 Mid Term */

#include <iostream>
#include "Alvarez_CS285W4MidTerm.h"
#include "Alvarez_CS285W4MidTerm1.h"

hourlyEmployee::hourlyEmployee(std::string name, std::string department, std::string title, int hoursWorked, 
double hourlyRate, double overTimePay, double grossPay, double taxAmount, double netPay) // Paramtered constructor.
{
    Employee::name = name;
    Employee::department = department;
    Employee::title = title;
    hourlyEmployee::hoursWorked = hoursWorked;
    hourlyEmployee::hourlyRate = hourlyRate;
    hourlyEmployee::overTimePay = overTimePay;
    hourlyEmployee::grossPay = grossPay;
    hourlyEmployee::taxAmount = taxAmount;
    hourlyEmployee::netPay = netPay;
}

void hourlyEmployee::setTaxAmount(int TaxAmo) // void function setting the tax rate. 
{
    taxAmount = TaxAmo;
}

double hourlyEmployee::getTaxAmount() // function to get the tax rate. 
{
    return taxAmount;
}

void hourlyEmployee::setHoursWorked(int hrsWorked) // void function setting hours worked. 
{
    hoursWorked = hrsWorked;
}

int hourlyEmployee::getHoursWorked() // function to get the hoursworked. 
{
    return hoursWorked;
}

void hourlyEmployee::setHourlyRate(double hrsRate) // void function setting hourly pay rate.
{
    hourlyRate = hrsRate;
}

double hourlyEmployee::getHourlyRate() // function to get the hourly pay rate.
{
    return hourlyRate;
}

void hourlyEmployee::setOverTimePay(double overTime) // void function setting over time pay.
{
    overTimePay = overTime;
}

double hourlyEmployee::getOverTimePay() // function to get the over time pay.
{
    return overTimePay;
}

void hourlyEmployee::setGrossPay(double gross) // void function to set gross pay. 
{
    grossPay = gross;
}

double hourlyEmployee::getGrossPay() // function to get the gross pay. 
{
    grossPay = hoursWorked * hourlyRate;
    return grossPay;
}

void hourlyEmployee::setNetPay(double net) // void function to set the net pay.
{
    netPay = net;
}

double hourlyEmployee::getNetPay(double amount) // function to get the net pay.
{
    amount = grossPay * taxAmount;
    netPay = grossPay - amount;
    return netPay;
}

double hourlyEmployee::getAvgNet(double AvNet) // fucntion to get the average net pay.
{
    AvNet = (netPay + netPay + netPay) / 3;
    std::cout << "\nAverage net pay for Company: $" << AvNet;
    return AvNet;
}

void hourlyEmployee::print() // printing the data. 
{
    std::cout << "-------------------";
    std::cout << "\nEmployee Name: " << name;
    std::cout << "\nTotal hours worked: "<< hoursWorked << "hrs";
    std::cout << "\nHourly Rate: $"<<hourlyRate;
    std::cout << "\nOver time pay if applicable: $" << overTimePay;
    std::cout << "\nGross pay: $" << grossPay;
    std::cout << "\nEmployee tax rate: "<<taxAmount<<"%";
    std::cout << "\nTotal net pay: $" << netPay;
    std::cout << std::endl;
}
