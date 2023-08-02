#ifndef DEATHKNIGHT_H_
#define DEATHKNIGHT_H_

#include "Hero.h"

class DeathKnight : public Hero
{
public:

    DeathKnight(const std::string& name, size_t maxMana, size_t baseManaRegenRate) : 
    Hero(name, maxMana, baseManaRegenRate) {};
    
    void castBasicSpell() override;
    void castUltimateSpell() override;
    
    void castFreeBasicSpell();

private:
//
};





#endif