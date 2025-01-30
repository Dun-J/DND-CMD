#ifndef WEAPON_H
#define WEAPON_H
#include "item.h"
struct Weapon: public Item{
    public:
        int d2;
        int d4;
        int d6;
        int d8;
        int d10;
        int d12;
        int d20;
        int mod;
};
#endif