#ifndef ARCHMAGE_H_
#define ARCHMAGE_H_

#include "Hero.h"

class Archmage : public Hero
{
public:
    Archmage(const std::string& name, size_t maxMana, size_t baseManaRegenRate,
           size_t manaRegenModifier) : Hero(name, maxMana, baseManaRegenRate)
           {
                m_regen_modifier = manaRegenModifier;
           };

    void castBasicSpell() override;
    void castUltimateSpell() override;
    void regenerateMana() override;


private:
    size_t m_regen_modifier;
};

#endif /* ARCHMAGE_H_ */