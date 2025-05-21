#include "hero.h"

Hero :: Hero(string name, int health, int phyDmg, int mgDmg, int mvmSpd, int reg, int phyDef, int mgDef)
    : name(name), health(health), phyDmg(phyDmg), mgDmg(mgDmg), mvmSpd(mvmSpd), reg(reg), phyDef(phyDef), mgDef(mgDef) {}

Hero :: ~Hero() {}

void Hero :: displayStat() const {
    cout << getClassName() << endl;
    cout << name << endl;
    cout << health << " " << phyDmg << " " << phyDef << endl;
}