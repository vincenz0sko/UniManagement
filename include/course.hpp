#ifndef COURSE_HPP
#define COURSE_HPP

#include <list>
#include <string>

#include "exam.hpp"

class Course
{
    private:
        // Data:
            std::string course_name;
            std::list<Exam> exams;
        // Functions:
            bool isPresent(const Exam&) const;
    public:
        // Constructor: 
            Course(const std::string&);
        // Functions:
            void addExam(const Exam&);
            void removeExam(const Exam&);
            const std::string& getName() const {return course_name; }
            std::list<Exam> getExams() const { return exams; }
        // Operators:
            bool operator==(const Course&) const;
            bool operator!=(const Course&) const;
};


#endif