#ifndef TYPES_H
#define TYPES_H

#include <iostream>
using namespace std;


// Text Color Code
#define Reset "\033[0m"
#define Bold "\033[1m"
#define Black "\033[30m"
#define Red "\033[31m"
#define Green "\033[32m"
#define Yellow "\033[33m"
#define Blue "\033[34m"
#define Magenta "\033[35m"
#define Cyan "\033[36m"
#define White "\033[37m"

#define BlackBack "\033[40m"
#define RedBack "\033[41m"
#define GreenBack "\033[42m"
#define YellowBack "\033[43m"
#define BlueBack "\033[44m"
#define MagentaBack "\033[45m"
#define CyanBack "\033[46m"
#define WhiteBack "\033[47m"

//Hero initial attribute values
#define initHP 500
#define initPDmg 50
#define initMDmg 50
#define initSpd 5
#define initReg 25
#define initPDef 30
#define initMDef 30


// Item Tier Enum
enum ItemTier{
    Common,
    Rare,
    SuperRare,
    SuperSuperRare,
    UltraRare,
    Epic,
    Legendary,
    Mythical
};

// Item Type Class Enum
enum class ItemType{
    Weapon,
    Wearable,
    Consumable
};

// Hero Type Class Enum
enum class HeroType{
    Melee,
    Mage,
    Ranged,
    Tank
};

// Enemy Class Enum
enum class EnemClass{
    Melee,
    Ranged,
    Mage,
    Tank,
    Beast,
    Boss
};

#endif