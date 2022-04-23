// Declaration of class person, it has name and age

#ifndef MYCURIOSITYMYWORLD_PERSON_H
#define MYCURIOSITYMYWORLD_PERSON_H

#include <iostream>
using std::string;

class Person
{
private:
    string _name;
    int _age;
public:
    Person();
    Person(string name, int age);
    Person(string name);
    string GetName() const;
    int GetAge() const;
    string ToString() const;

};


#endif //MYCURIOSITYMYWORLD_PERSON_H
