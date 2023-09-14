#ifndef CLASSNAME_H
#define CLASSNAME_H

#include <string>
#include <iostream>

using namespace std;

class ClassName
{
    public:
        ClassName();
        virtual ~ClassName();

        void inputClass();

    protected:

    private:
        string className;
        string courseName;
        string teacherName;

};

#endif // CLASSNAME_H
