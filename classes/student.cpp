#include <iostream>
#include <string>
#include <map>
#include "student.hpp"

// Constructors:
    Student::Student() = default;
    Student::Student(const std::string& n, const std::string& s, unsigned i): Person(n, s, i) {}

// Member Functions:
    void Student::print_student_info(std::ostream& os) const
    {
        os << "-- Courses --" << std::endl;
        for (const auto& c : enrolled_courses)
            os << "Course Name: " << c.first << " | " << "Grade: " << c.second << std::endl;
        os << "Average Grade: " << average_grade << std::endl; 
    }
    void Student::print(std::ostream& os) const
    {
        Person::print(os);
        print_student_info(os);
    }
    void Student::add_course(const std::string& course_name, unsigned grade)
    {
        auto result = enrolled_courses.insert({course_name, grade});
        if (result.second)
        {
            sum_of_grades += grade;
            average_grade = sum_of_grades / enrolled_courses.size();
        }
            
    }

    inline double Student::get_average() const { return average_grade; }