#ifndef ARMOR_H
#define ARMOR_H
#include "item.h"
    struct Armor: public Item{
        public:
            char type;
            int mod;
    };
#endif