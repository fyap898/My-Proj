#ifndef MELEE_H
#define MELEE_H

#include "hero.h"

class Melee : public Hero {
public:
    Melee(string name);
    string getClassName() const override;
};

#endif
