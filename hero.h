#ifndef HERO_H
#define HERO_H

#include "types.h"
#include <string>

class Hero {
protected:
    string name;
    int health;
    int phyDmg;
    int mgDmg;
    int mvmSpd;
    int reg;
    int phyDef;
    int mgDef;

public:
    Hero(string name, int health, int phyDmg, int mgDmg, int mvmSpd, int reg, int phyDef, int mgDef);
    virtual ~Hero();
    virtual void displayStat() const;
    virtual string getClassName() const = 0;
};

#endif
