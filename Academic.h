// Declaration of academic class, it has grade and year standing

#ifndef MYCURIOSITYMYWORLD_ACADEMIC_H
#define MYCURIOSITYMYWORLD_ACADEMIC_H

#include <iostream>
using std::string;

class Academic
{
private:
    int _grade;
    string _yearStanding;
public:
    Academic();
    Academic(int grade);
    Academic(int grade, string yearStanding);
    int GetGrade() const;
    string GetYearStanding() const;
    string ToString() const;
};


#endif //MYCURIOSITYMYWORLD_ACADEMIC_H
