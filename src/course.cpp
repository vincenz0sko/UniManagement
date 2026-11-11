#include <list>
#include <string>

#include "course.hpp"

class Student;

// Constructor:
    Course::Course(const std::string& n): course_name(n) {}

// Functions:
    bool Course::isPresent(const Exam& target) const
    {
        for (const auto& e : exams)
            if (e == target)
                return true;
        return false;
    }
    void Course::addExam(const Exam& exam)
    {
        if (!isPresent(exam))
            exams.push_back(exam);
    }
    void Course::removeExam(const Exam& exam)
    {
        for (auto iter = exams.begin(); iter != exams.end(); ++iter)
            if (*iter == exam)
            {
                exams.erase(iter);
                return;
            }
    }

// Operators:
    bool Course::operator==(const Course& other) const
    {
        return course_name == other.course_name;
    }
    bool Course::operator!=(const Course& other) const
    {
        return !(*this == other);
    }