#pragma once
#include "heroActions.h"

class Warrior :
    public Hero
{
    bool canCharge;
public:
    Warrior(string name);  
};

