#ifndef PERSON_HPP
#define PERSON_HPP

#include <iostream>
#include <string>

class Person
{   
    protected:
        // Data:
            std::string name;
            std::string surname;
            unsigned id;
    public:
        // Constructors:    
            Person();
            Person(const std::string&, const std::string&, unsigned);
        // Destructor:
            virtual ~Person();
        // Member Functions:
            virtual void print(std::ostream&) const;
            std::string get_name() const;
            std::string get_surname() const;
            unsigned get_id() const;
};


#endif