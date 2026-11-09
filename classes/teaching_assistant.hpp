#ifndef TEACHING_ASSISTANT_HPP
#define TEACHING_ASSISTANT_HPP

#include "student.hpp"
#include "employee.hpp"

class TeachingAssistant: public Student, public Employee
{
    public:
        // Constructors:
            TeachingAssistant();
            TeachingAssistant(const std::string&, const std::string&, unsigned, double, const std::string&);
        // Member Functions:    
            void print() const override;
};

#endif