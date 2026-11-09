#include <iostream>
#include <string>
#include "person.hpp"

// Constructors:
    Person::Person() = default;
    Person::Person(const std::string& n, const std::string& s, unsigned i): name(n), surname(s), id(i) {}

// Destructor:
    Person::~Person() {}

// Member Functions:
    void Person::print() const
    {
        std::cout << "-- Personal Information --" << std::endl
             << "Name: " << name << " | "
             << "Surname: " << surname << " | "
             << "Id: " << id << std::endl;
    }

    inline std::string Person::get_name() const { return name; }
    inline std::string Person::get_surname() const { return surname; }
    inline unsigned Person::get_id() const { return id; }