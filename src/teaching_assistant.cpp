#include <iostream>
#include <string>

#include "person.hpp"
#include "student.hpp"
#include "teaching_assistant.hpp"

// Constructors:
    TeachingAssistant::TeachingAssistant() = default;
    TeachingAssistant::TeachingAssistant(const std::string& n, const std::string& s, unsigned i, 
        double sa, const std::string& d): Person(n, s, i ), Employee(sa, d) {}

// Member Functions:
    void TeachingAssistant::print(std::ostream& os) const
    {
        Person::print(os);
        print_employee_info(os);
    }