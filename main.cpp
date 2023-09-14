#include <iostream>
#include <cctype>

#include "Date.h"
#include "ClassName.h"

using namespace std;

string one = "WELCOME TO THE METHOD CORNELL\n-----------------------------\n";
string two = "\n1. Add the day of the course, then his name and others details.";
string three = "\n2. Write the course with short path, then make a resume.\n\n";

string welcomeMessage(string one, string two, string three)
{
    cout << one << two << three;
}


int main(int argc, char **argv)
{

    welcomeMessage(one, two, three);

    // Create Objects
    Date date;
    ClassName course;

    // Call the method
    date.inputDate();
    course.inputClass();

    return 0;
}
