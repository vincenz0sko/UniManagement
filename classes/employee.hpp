#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP

#include <iostream>
#include <string>
#include "person.hpp"

class Employee: public virtual Person
{
    protected:
        // Data:    
            double salary;
            std::string department;
        // Member Functions:
            void print_employee_info(std::ostream&) const;
    public:
        // Constructors:
            Employee();
            Employee(double, const std::string&);
            Employee(const std::string&, const std::string&, unsigned, double, const std::string&);
        // Member Functions:
            void print(std::ostream&) const override;
            double get_salary() const;
            std::string get_department() const;
};

#endif