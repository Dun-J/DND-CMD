#ifndef CHARACTER_H
#define CHARACTER_H
#include "item.h"
#include <vector>
class Character{
    public:
        bool addXP(int);
        bool addLevel(int);
        bool addLevel();
        bool addItem();
    private:
        bool _useMilestone;
        int _xp;
        int _level;
        std::vector<Item> _itemList;
};
#endif