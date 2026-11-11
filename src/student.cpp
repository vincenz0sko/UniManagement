#include <iostream>
#include <string>
#include "student.hpp"
#include "course.hpp"


// Constructors:
    Student::Student() = default;
    Student::Student(const std::string& n, const std::string& s, unsigned i): Person(n, s, i) {}