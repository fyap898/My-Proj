#include "melee.h"

Melee :: Melee(string name)
    : Hero(name, initHP, initPDmg, initMDmg, initSpd, initReg, initPDef, initMDef) {}

string Melee :: getClassName() const {
    return "Melee";
}