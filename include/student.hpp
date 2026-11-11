#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <list>
#include <iostream>
#include <string>
#include "person.hpp"

class Course;

class Student: virtual public Person
{
    public:
        // Constructors:
            Student();
            Student(const std::string&, const std::string&, unsigned);
};

#endif