#include "moduleinfo.h"

ModuleInfo::ModuleInfo(string name, string version, string author)
{
    this->name = name;
    this->version = version;
    this->author = author;
}

string ModuleInfo::getProperty(string key)
{
    map<string, string>::iterator item = properties.find(key);
    if(item == properties.end()) throw NoSuchValueException();
    return properties[key];
}

void ModuleInfo::setProperty(string key, string value)
{
    properties[key] = value;
}
