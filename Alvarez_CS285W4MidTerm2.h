/* Storm Alvarez
March 11, 2019
CS285 Week 4 Mid Term */

#ifndef ALVAREZ_CS285W4MIDTERM2_H_
#define ALVAREZ_CS285W4MIDTERM2_H_

#include <iostream>
#include <string>
#include "Alvarez_CS285W4MidTerm.h"

class salariedEmployee: public Employee
{
    private:
        int hoursWorked; // hours worked for each employee.
        double hourlyRate; // Rate each employee gets paid.
        double annual; // Annal salary for the employee. 
        double grossPay; // Gross pay for employee. hoursWorked * hourlyRate
        double taxAmount; // variable for the tax rate. 
        double netPay; // Net pay for Employee. GrossPay * tax amount - amount = netPay. 

    public:
        salariedEmployee(std::string name, std::string department, std::string title, int hoursWorked, 
            double hourlyRate, double annual, double grossPay, double taxAmount, double netPay); // Parametered constructor. 
        void setAnnual(double Annual); // void function to set the annual salary. 
        double getAnnual(); // function to get the annual salary. 
        void setGrossPay(double gross); // void function to set gross pay. 
        double getGrossPay(); // function to get the gross pay. 
        void setTaxAmount(double TaxAmo); // void function setting the tax rate.
        double getTaxAmount(); // function to get the tax rate. 
        void setNetPay(double net); // void function to set the net pay.
        double getNetPay(double amount); // function to get the net pay. 
        void print(); // printing the data. 
};

#endif /* ALVAREZ_CS285W4MIDTERM2_H_ */