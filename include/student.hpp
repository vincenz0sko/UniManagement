#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <list>
#include <iostream>
#include <string>
#include "person.hpp"

class Course;

class Student: virtual public Person
{
    private:
        // Member Functions:
            bool isInCourse(const Course*) const;
    protected:
        // Data:
            std::list<const Course*> enrolled_courses;
        // Member Functions:
            void print_student_info(std::ostream&) const;
    public:
        // Constructors:
            Student();
            Student(const std::string&, const std::string&, unsigned);
        // Member Functions:
            void print(std::ostream&) const override;
            void addCourse(const Course*);
            void removeCourse(const Course*);
};

#endif