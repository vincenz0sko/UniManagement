#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <map>
#include <iostream>
#include <string>
#include "person.hpp"

class Student: virtual public Person
{
    private:
        // Data:
            double sum_of_grades = 0;
    protected:
        // Data:
            std::map<std::string, unsigned> enrolled_courses;
            double average_grade = 0;
        // Member Functions:
            void print_student_info(std::ostream&) const;
    public:
        // Constructors:
            Student();
            Student(const std::string&, const std::string&, unsigned);
        // Member Functions:
            void print(std::ostream&) const override;
            void add_course(const std::string&, unsigned);
            double get_average() const;
};

#endif