#ifndef EMPLOYEE
#define EMPLOYEE

#include <string>
#include "person.hpp"

class Employee: public virtual Person
{
    protected:
        // Data:    
            double salary;
            std::string department;
        // Member Functions:
            void print_employee_info() const;
    public:
        // Constructors:
            Employee();
            Employee(const std::string&, const std::string&, unsigned, double, const std::string&);
        // Member Functions:
            void print() const override;
            double get_salary() const;
            std::string get_department() const;
};

#endif