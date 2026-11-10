#ifndef COURSE_HPP
#define COURSE_HPP

#include <list>
#include <string>

class Student;

class Course
{
    private:
        // Data:
            std::string course_name;
            std::list<const Student*> enrolled_students;
        // Member Functions:
            bool isEnrolled(const Student* target) const;
    public:
        // Constructor: 
            Course(const std::string&);
        // Member Functions:    
            void addStudent(const Student*);
            void removeStudent(const Student*);
            std::string getName() const {return course_name; }
            std::list<const Student*> getStudents() const { return enrolled_students;}
        // Operators:
            bool operator==(const Course&) const;
            bool operator!=(const Course&) const;
        // Deleted:
            Course(const Course&) = delete;
            Course& operator=(const Course&) = delete;
};


#endif