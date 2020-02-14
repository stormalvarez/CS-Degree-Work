/* Storm Alvarez
March 11, 2019
CS285 Week 4 Mid Term */

#ifndef ALVAREZ_CS285W4MIDTERM_H_
#define ALVAREZ_CS285W4MIDTERM_H_

#include <iostream>
#include <string>

class Employee
{
    public:
        std::string name; // string variable called name;
        std::string department; // string variable called department.
        std::string title; // string variable called title. 

        Employee(); // empty constructor.
        Employee(std::string name, std::string department, std::string title); // constructor with parameters. 
        void setName(std::string fname); // void function setting employees name. 
        std::string getName(); // string function to get the name of employee.
        void setDepartment(std::string depart); // void function setting employees department. 
        std::string getDepartment(); // string function to get the department for the employee.
        void setTitle(std::string empTitle); // void function setting employees title. 
        std::string getTitle(); // string function to get the job title of employee.
        virtual void print(); // virtual function for the classes to use to print information. 
};

#endif /* ALVAREZ_CS285W4MIDTERM_H_ */