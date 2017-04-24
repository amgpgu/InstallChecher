#include "nosuchvalueexception.h"

NoSuchValueException::NoSuchValueException()
{

}

const char *NoSuchValueException::what() const
{
    return "No such value";
}
