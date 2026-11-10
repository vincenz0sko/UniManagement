#include <list>
#include <string>

#include "course.hpp"

class Student;

// Constructor:
    Course::Course(const std::string& n): course_name(n) {}

// Member Functions:
    bool Course::isEnrolled(const Student* target) const
    {
        for (const Student* s : enrolled_students)
            if (s == target)
                return true;
        return false;
    }
    void Course::addStudent(const Student* std)
    {
        if (!std || isEnrolled(std))
            return;
        enrolled_students.push_back(std);
    }
    void Course::removeStudent(const Student* std)
    {
        for (auto iter = enrolled_students.begin(); iter != enrolled_students.end(); ++iter)
            if (*iter == std)
            {
                enrolled_students.erase(iter);
                return;
            }
    }

// Operators:
    bool Course::operator==(const Course& other) const
    {
        if (course_name != other.course_name)
            return false;
        return enrolled_students == other.enrolled_students;
    }
    bool Course::operator!=(const Course& other) const
    {
        return !(*this == other);
    }