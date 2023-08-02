#ifndef DRAWRANGER_H_
#define DRAWRANGER_H_

#include "Hero.h"

class DrawRanger : public Hero
{
public:
    DrawRanger(const std::string& name, int maxMana, int baseManaRegenRate) :
    Hero(name, maxMana, baseManaRegenRate) {};

    void castBasicSpell() override;
    void castUltimateSpell() override;
    void castFreeBasicSpell();
};

#endif