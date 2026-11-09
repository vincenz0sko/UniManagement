#include <iostream>
#include <string>
#include <map>
#include "student.hpp"

// Constructors:
    Student::Student() = default;
    Student::Student(const std::string& n, const std::string& s, unsigned i): Person(n, s, i) {}

// Member Functions:
    void Student::print_student_info() const
    {
       std::cout << "-- Courses --" << std::endl;
        for (const auto& c : enrolled_curses)
            std::cout << "Course Name: " << c.first << " | " << "Grade: " << c.second << std::endl;
        std::cout << "Average Grade: " << average_grade << std::endl; 
    }
    void Student::print() const
    {
        Person::print();
        print();
    }
    void Student::add_course(const std::string& course_name, unsigned grade)
    {
        enrolled_curses.insert({course_name, grade});
        sum_of_grades += grade;
        average_grade = sum_of_grades / enrolled_curses.size();
    }

    inline double Student::get_average() const { return average_grade; }