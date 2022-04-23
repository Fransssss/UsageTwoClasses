// Implementation of class Person

#include "Person.h"
#include <sstream>
using std::stringstream;

Person::Person()
{
    _name = "NoName";
    _age =  -1;
}

Person::Person(string name, int age)
{
    _name = name;
    _age = age;
}

Person::Person(string name)
{
    _name = name;
    _age = -1;
}

string Person::GetName() const
{
    return  _name;
}

int Person::GetAge() const
{
    return  _age;
}

string Person::ToString() const
{
    stringstream ss;
    ss << " Name : " << _name << ", Age: " << _age;
    return ss.str();
}