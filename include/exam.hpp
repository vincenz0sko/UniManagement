#ifndef EXAM_HPP
#define EXAM_HPP

#include <list>

class ExamResult
{
    private:
        // Data
            unsigned id;
            unsigned grade;
            unsigned std_id;
    public:
        // Constructor:
            ExamResult(unsigned i, unsigned g, unsigned si): id(i), grade(g), std_id(si) {}
        // Functions:
            unsigned getId() const { return id; }
            unsigned getgrade() const { return grade; }
            unsigned getStdId() const { return std_id; }
        // Operators:
            bool operator==(const ExamResult& lhs) const { return id == lhs.id; }
            bool operator!=(const ExamResult& lhs) const { return !(*this == lhs); }
};

class Exam
{
    private:
        // Data:
            unsigned id;
            std::list<ExamResult> results;
        // Functions:
            bool isPresent(const ExamResult&) const;
    public:
        // Constructor:
            Exam(unsigned);
        // Functions:
            void addResult(const ExamResult&);
            void removeResult(const ExamResult&);
            unsigned getId() const { return id; }
            const std::list<ExamResult>& getResults() const { return results; }
        // Operators:
            bool operator==(const Exam& lhs) const { return id == lhs.id; }
            bool operator!=(const Exam& lhs) const { return !(*this == lhs); }
};

#endif