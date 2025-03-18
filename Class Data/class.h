#ifndef CLASS_H
#define CLASS_H
#include <vector>
#include <string>
class Class{
    public:
        bool addSubClass();
        bool removeSubClass();
        std::vector<std::string> returnSubClassNames();\
    private:
};
#endif