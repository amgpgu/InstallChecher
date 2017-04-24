#ifndef NOSUCHVALUEEXCEPTION_H
#define NOSUCHVALUEEXCEPTION_H
#include <exception>
using namespace std;

class NoSuchValueException : public exception
{
public:
    NoSuchValueException();
    const char *what() const;
};

#endif // NOSUCHVALUEEXCEPTION_H
