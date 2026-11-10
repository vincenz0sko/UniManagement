#include <iostream>
#include <string>
#include "student.hpp"
#include "course.hpp"


// Constructors:
    Student::Student() = default;
    Student::Student(const std::string& n, const std::string& s, unsigned i): Person(n, s, i) {}

// Member Functions:
    bool Student::isInCourse(const Course* target) const
    {
        if (target)
            for (const auto c : enrolled_courses)
                if (target == c)
                    return true;
        return false;
    }
    void Student::print_student_info(std::ostream& os) const
    {
        os << "-- Courses --" << '\n';
        for (const auto& c : enrolled_courses)
            os << "Course Name: " << c->getName() << '\n';
    }
    void Student::print(std::ostream& os) const
    {
        Person::print(os);
        print_student_info(os);
    }
    void Student::removeCourse(const Course* course)
    {
        if (course && isInCourse(course))
        {
            for (auto c = enrolled_courses.begin(); c != enrolled_courses.end(); ++c)
                if (*c == course)
                {
                    enrolled_courses.erase(c);
                    return;
                }
            
        }
    }
    void Student::addCourse(const Course* course)
    {
        if (!course || isInCourse(course))
            enrolled_courses.push_back(course);
        
    }