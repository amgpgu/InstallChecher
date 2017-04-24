#ifndef MODULEINFO_H
#define MODULEINFO_H
#include <string>
#include <map>
#include <nosuchvalueexception.h>

using namespace std;

class ModuleInfo
{
public:
    ModuleInfo(string name, string version, string author, string desc);
    string getProperty(string key) throw NoSuchValueException;
    void setProperty(string key, string value);
private:
    string name;
    string version;
    string author;
    string desc;
    map<string, string> properties;
};

#endif // MODULEINFO_H
