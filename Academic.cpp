// Definition of class academic

#include "Academic.h"
#include <sstream>
using std::stringstream;

Academic::Academic()
{
    _grade = -1;
    _yearStanding = "NotSpecified";
}

Academic::Academic(int grade)
{
    _grade = grade;
}

Academic::Academic(int grade, string yearStanding)
{
    _grade = grade;
    _yearStanding = yearStanding;
}

int Academic::GetGrade() const
{
    return _grade;
}

string Academic::GetYearStanding() const
{
    return _yearStanding;
}

string Academic::ToString() const
{
    stringstream ss;
    ss << " Grade: " << _grade << ", Year standing: " << _yearStanding;
    return ss.str();
}