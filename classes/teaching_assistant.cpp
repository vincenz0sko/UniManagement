#include <iostream>
#include <string>

#include "person.hpp"
#include "student.hpp"
#include "teaching_assistant.hpp"

// Constructors:
    TeachingAssistant::TeachingAssistant() = default;
    TeachingAssistant::TeachingAssistant(const std::string& n, const std::string& s, unsigned i, 
        double sa, const std::string& d): Employee(n, s, i, sa, d) {}

// Member Functions:
    void TeachingAssistant::print() const
    {
        Person::print();
        print_student_info();
        print_employee_info();
    }