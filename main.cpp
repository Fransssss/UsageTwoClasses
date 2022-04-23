// Title: Usage of Two classes
// Purpose: Use two classes to store and output a person data
// Practices makes improvement - Enjoy the process
// Author : Fransiskus Agapa

#include <iostream>
#include <string>
#include "Person.h"
#include "Academic.h"
using namespace std;

using std::cout;
using std::endl;
using std::cin;
using std::string;


int main()
{
    Person unknown;
    Academic unknowns;
    cout << endl << "Name : " << unknown.GetName() << endl;
    cout << "Age: " << unknown.GetAge() << endl;
    cout << "Grade: " << unknowns.GetGrade() << endl;
    cout << "Year standing: " <<  unknowns.GetYearStanding() << endl;
    cout << unknown.ToString() << endl;
    cout << unknowns.ToString() << endl;

    Person student("Matt");
    Academic sameStudent;
    cout << endl << "Name: " << student.GetName() << endl;
    cout << "Age: " << student.GetAge() << endl;
    cout << "Grade: " << sameStudent.GetGrade() << endl;
    cout << "Year standing: " << sameStudent.GetYearStanding() << endl;
    cout << student.ToString() << endl;
    cout << sameStudent.ToString() << endl;

    Person nextStudent("Jess", 12);
    Academic sameNextStudent;
    cout << endl << "Name: " << nextStudent.GetName() << endl;
    cout << "Age: " << nextStudent.GetAge() << endl;
    cout << "Grade: " << sameStudent.GetGrade() << endl;
    cout << "Year standing: " << sameNextStudent.GetYearStanding() << endl;
    cout << nextStudent.ToString() << endl;
    cout << sameNextStudent.ToString() << endl;

    Person newStudent("Jacob", 20);
    Academic sameNewStudent(80);
    cout << endl << "Name: " << newStudent.GetName() << endl;
    cout << "Age: " << newStudent.GetAge() << endl;
    cout << "Grade: " << sameNewStudent.GetGrade() << endl;
    cout << "Year standing: " << sameNewStudent.GetYearStanding() << endl;
    cout << newStudent.ToString() << endl;
    cout << sameNewStudent.ToString() << endl;

    Person formerStudent("Lisa", 24);
    Academic sameFormerStudent(90, "Senior");
    cout << endl << "Name: " << formerStudent.GetName() << endl;
    cout << "Age: " << formerStudent.GetAge() << endl;
    cout << "Grade: " << sameFormerStudent.GetGrade() << endl;
    cout << "Year standing: " << sameFormerStudent.GetYearStanding() << endl;
    cout << formerStudent.ToString() << endl;
    cout << sameFormerStudent.ToString() << endl;

    return 0;
}
