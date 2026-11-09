#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <map>
#include <string>
#include "person.hpp"

class Student: virtual public Person
{
    private:
        // Data:
            double sum_of_grades = 0;
    protected:
        // Data:
            std::map<std::string, unsigned> enrolled_curses;
            double average_grade = 0;
        // Member Functions:
            void print_student_info() const;
    public:
        // Constructors:
            Student();
            Student(const std::string&, const std::string&, unsigned);
        // Member Functions:
            void print() const override;
            void add_course(const std::string&, unsigned);
            double get_average() const;
};

#endif