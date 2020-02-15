/* Storm Alvarez
March 11, 2019
CS285 Week 4 Mid Term */

#ifndef ALVAREZ_CS285W4MIDTERM1_H_
#define ALVAREZ_CS285W4MIDTERM1_H_

#include <iostream>
#include <string>
#include "Alvarez_CS285W4MidTerm.h"

class hourlyEmployee: public Employee
{
    protected:
        double taxAmount; // variable for the tax rate. 
        int hoursWorked; // hours worked for each employee. 
        double hourlyRate; // Rate each employee gets paid. 
        double overTimePay; // Over time if the employee worked over time. 
        double grossPay; // Gross pay for employee. hoursWorked * hourlyRate
        double netPay; // Net pay for Employee. GrossPay * tax amount - amount = netPay. 
        double AvgNet; // Calculates the companies total net pay. Hopefully..

    public:
        hourlyEmployee(std::string name, std::string department, std::string title, int hoursWorked, 
            double hourlyRate, double overTimePay, double grossPay, double taxAmount, double netPay); // Paramtered constructor.
        void setTaxAmount(int taxAmo); // void function setting the tax rate. 
        double getTaxAmount(); // function to get the tax rate. 
        void setHoursWorked(int hrsWorked); // void function setting hours worked. 
        int getHoursWorked(); // function to get the hoursworked. 
        void setHourlyRate(double hrsRate); // void function setting hourly pay rate.
        double getHourlyRate(); // function to get the hourly pay rate.
        void setOverTimePay(double overTime); // void function setting over time pay.
        double getOverTimePay(); // function to get the over time pay. 
        void setGrossPay(double gross); // void function to set gross pay. 
        double getGrossPay(); // function to get the gross pay. 
        void setNetPay(double net); // void function to set the net pay. 
        double getNetPay(double amount); // function to get the net pay. 
        double getAvgNet(double AvNet); // fucntion to get the average net pay. 
        void print(); // printing the data. 
};

#endif /* ALVAREZ_CS285W4MIDTERM1_H_ */
