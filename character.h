#ifndef CHARACTER_H
#define CHARACTER_H
#include "item.h"
#include <vector>
#include <string>
class Character{
    public:
        std::string name;
        bool addXP(int);
        bool addLevel(int);
        bool addLevel();
        bool addItem(Item);
        Item findItem(std::string);
    private:
        bool _useMilestone;
        int _xp;
        int _level;
        std::vector<std::string> languages;
        std::vector<Item> _itemList;
        std::string _class;
        int _str;
        int _dex;
        int _con;
        int _wis;
        int _int;
        int _cha;
        int _hp;
        int _tempHp;
};
#endif