/* Storm Alvarez
March 11, 2019
CS285 Week 4 Mid Term */

#include <iostream>
#include <iomanip>
#include "Alvarez_CS285W4MidTerm1.h"
#include "Alvarez_CS285W4MidTerm2.h"

int main()
{
    Employee *payRoll[6]; // Array for Employee Class

    // The array values, assigned to each of the two classes need for execution. 
    payRoll[0] = new hourlyEmployee("Rose", "Sales", "Director of Sales", 40, 25.65, 0, 1026, 30, 718.20);
    payRoll[1] = new hourlyEmployee("Erica", "Sales", "Sales Director", 42, 19.25, 57.76, 827.76, 30, 579.43);
    payRoll[2] = new hourlyEmployee("Vanessa", "Sales", "Client Advisor", 36, 19.75, 0, 711, 30, 497.70);
    payRoll[3] = new salariedEmployee("Manny", "Sales", "Estimator", 37, 19.50, 37518, 721.50, 30, 505.05);
    payRoll[4] = new salariedEmployee("John", "Sales", "Salesman", 32, 18.95, 31532.80, 606.40, 30, 424.48);
    payRoll[5] = new salariedEmployee("Lacy", "Sales", "Producer", 35, 19.25, 35035, 673.75, 30, 471.62);

    std::cout << std::fixed << std::showpoint << std::setprecision(2); // Allows decimal like values.

    std::cout << "\nHourly Employee Information." << std::endl; // Just a placeholder to better view the data.
    payRoll[0]->print(); // array value one.
    payRoll[1]->print(); // array value two.
    payRoll[2]->print(); // array value three.

    std::cout << "\n" << std::endl;
    std::cout << "\nSalary Employee Information." << std::endl; // Just a placeholder to better view the data.
    payRoll[3]->print(); // array value four.
    payRoll[4]->print(); // array value five.
    payRoll[5]->print(); // array value six.


    return 0;
}
