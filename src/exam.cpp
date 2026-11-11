#include <list>

#include "exam.hpp"

// Cosntructor:
    Exam::Exam(unsigned i): id(i) {}

// Functions:
    bool Exam::isPresent(const ExamResult& target) const
    {
        for (const auto& r : results)
            if (r == target)
                return true;
        return false;
    }   
    void Exam::addResult(const ExamResult& rstl)
    {
        if (!isPresent(rstl))
            results.push_back(rstl);    
    }
    void Exam::removeResult(const ExamResult& rslt)
    {
        for (auto iter = results.begin(); iter != results.end(); ++iter)
            if (*iter == rslt)
            {
                results.erase(iter);
                return;
            }
    }