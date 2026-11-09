#include <string>
#include <iostream>
#include "employee.hpp"

// Constructors:
    Employee::Employee() = default;
    Employee::Employee(double sa, const std::string& d): salary(sa), department(d) {}
    Employee::Employee(const std::string& n, const std::string& s, unsigned i, double sa, const std::string& d):
        Person(n, s, i), salary(sa), department(d) {}

// Member Functions:
    void Employee::print_employee_info(std::ostream& os) const
    {
        os << "-- Work Information --" << std::endl
                  << "Salary: " << salary << " | "
                  << "Department: " << department << std::endl;
    }
    void Employee::print(std::ostream& os) const
    {
        Person::print(os);
        print_employee_info(os);
    }
    
    inline double Employee::get_salary() const { return salary; }
    inline std::string Employee::get_department() const { return department; }