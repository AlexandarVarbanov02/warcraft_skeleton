#include "../Heroes/Archmage.h" //needs to be removed
#include "Defines.h" //needs to be removed and relocated
#include <iostream>

void Archmage::castBasicSpell()
{
    size_t current_mana = getMana();
    if(current_mana < ARCHMAGE_BASIC_SPELL_MANA_COST)
    {
        std::cout << getName() << " - not enough mana to cast " << ARCHMAGE_BASIC_SPELL_NAME << '\n';
        // not enough mana can be added to an const expr in defines.h
    }
    else
    {
        current_mana -= ARCHMAGE_BASIC_SPELL_MANA_COST;
        std::cout << getName() << " casted " << ARCHMAGE_BASIC_SPELL_NAME << " for " << ARCHMAGE_BASIC_SPELL_MANA_COST << " mana\n";
        setMana(current_mana);        
    }
}

void Archmage::castUltimateSpell()
{
    size_t current_mana = getMana();
    if(current_mana < ARCHMAGE_ULTIMATE_SPELL_MANA_COST)
    {
        std::cout << getName() << " - not enough mana to cast " << ARCHMAGE_ULTIMATE_SPELL_NAME << '\n';
    }
    else
    {
        current_mana -= ARCHMAGE_ULTIMATE_SPELL_MANA_COST;
        std::cout << getName() << " casted " << ARCHMAGE_BASIC_SPELL_NAME << " for " << ARCHMAGE_BASIC_SPELL_MANA_COST << " mana\n";
        setMana(current_mana);
        regenerateMana();
    }
}

void Archmage::regenerateMana()
{
    if(getMana() == getMaxMana())
    {
        return;
    }
    setManaRegenerate(getManaRegenerate() * m_regen_modifier);
    Hero::regenerateMana();
    /* total_mana += getManaRegenerate();
    setMana(total_mana); */
}