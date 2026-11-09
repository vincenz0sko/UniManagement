#include <string>
#include <iostream>
#include "employee.hpp"

// Constructors:
    Employee::Employee() = default;
    Employee::Employee(const std::string& n, const std::string& s, unsigned i, double sa, const std::string& d):
        Person(n, s, i), salary(sa), department(d) {}

// Member Functions:
    void Employee::print_employee_info() const
    {
        std::cout << "-- Work Information --" << std::endl
                  << "Salary: " << salary << " | "
                  << "Department: " << department << std::endl;
    }
    void Employee::print() const
    {
        Person::print();
        print();
    }
    
    inline double Employee::get_salary() const { return salary; }
    inline std::string Employee::get_department() const { return department; }