#include "ClassName.h"
#include <iostream>

using namespace std;

ClassName::ClassName()
{
    //ctor
}

ClassName::~ClassName()
{
    //dtor
}
void ClassName::inputClass()
{
    bool isValid = true;
    cout << "Choose the class, the course and the teacher\n";

    while (isValid)
    {
        cout << "Class Name: ";
        cin >> className;

        cout << "Course Name: ";
        cin >> courseName;

        cout << "Teacher Name: ";
        cin >> teacherName;
        break;
    }
    cout << "This course was on the class " << className << "\n" << "Course Name: " << courseName << "\n" << "Teacher Name: " << teacherName;
}
