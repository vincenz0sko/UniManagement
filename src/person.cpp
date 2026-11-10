#include <iostream>
#include <string>
#include "person.hpp"

// Constructors:
    Person::Person() = default;
    Person::Person(const std::string& n, const std::string& s, unsigned i): name(n), surname(s), id(i) {}

// Destructor:
    Person::~Person() {}

// Member Functions:
    void Person::print(std::ostream& os) const
    {
        os << "-- Personal Information --" << std::endl
           << "Name: " << name << " | "
           << "Surname: " << surname << " | "
           << "Id: " << id << std::endl;
    }

    inline std::string Person::get_name() const { return name; }
    inline std::string Person::get_surname() const { return surname; }
    inline unsigned Person::get_id() const { return id; }

// Operators:
    bool Person::operator==(const Person& other) const
    {
        return name == other.name && surname == other.surname && id == other.id;
    }
    bool Person::operator!=(const Person& other) const
    {
        return !(*this == other);
    }