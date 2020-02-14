/* Storm Alvarez
March 11, 2019
CS285 Week 4 Mid Term */

#include <iostream>
#include <string>
#include "Alvarez_CS285W4MidTerm.h"

Employee::Employee() // Empty constructor classifing the three strings.
{
    name = " ";
    department = " ";
    title = " ";
}

Employee::Employee(std::string name, std::string department, std::string title) // Parametered constructor. 
{
    Employee::name = name;
    Employee::department = department;
    Employee::title = title;
}

void Employee::setName(std::string fname) // void function setting employees name.  
{
    name = fname;
}

std::string Employee::getName() // string function to get the name of employee.
{
    return name;
}  

void Employee::setDepartment(std::string depart) // void function setting employees department. 
{
    department = depart;
}

std::string Employee::getDepartment() // string function to get the department for the employee.
{
    return department;
}

void Employee::setTitle(std::string empTitle) // void function setting employees title. 
{
    title = empTitle;
}

std::string Employee::getTitle() // string function to get the job title of employee.
{
    return title;
}

void Employee::print() // virtual function for the classes to use to print information. 
{
    std::cout << "--------------------------------";
    std::cout << "\nEmployee Name: " << name;
    std::cout << "\nEmployees Department: "<< department;
    std::cout << "\nEmployees Title: "<< title;
}