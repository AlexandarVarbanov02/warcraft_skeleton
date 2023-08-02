#include "../Heroes/DeathKnight.h" //needs to be removed
#include "Defines.h" //needs to be removed and relocated
#include <iostream>

void DeathKnight::castBasicSpell()
{
    size_t current_mana = getMana();
    if(current_mana < DEATH_KNIGHT_BASIC_SPELL_MANA_COST)
    {
        std::cout << getName() << " - not enough mana to cast " << DEATH_KNIGHT_BASIC_SPELL_NAME << '\n';
        // not enough mana can be added to an const expr in defines.h
    }
    else
    {
        current_mana -= DEATH_KNIGHT_BASIC_SPELL_MANA_COST;
        std::cout << getName() << " casted " << DEATH_KNIGHT_BASIC_SPELL_NAME << " for " << DEATH_KNIGHT_BASIC_SPELL_MANA_COST << " mana\n";
        setMana(current_mana);        
    }
}

void DeathKnight::castFreeBasicSpell()
{
    std::cout << getName() << " casted " << DEATH_KNIGHT_BASIC_SPELL_NAME << " for 0 mana\n";
}

void DeathKnight::castUltimateSpell()
{
    size_t current_mana = getMana();
    if(current_mana < DEATH_KNIGHT_ULTIMATE_SPELL_MANA_COST)
    {
        std::cout << getName() << " - not enough mana to cast " << DEATH_KNIGHT_ULTIMATE_SPELL_NAME << '\n';
    }
    else
    {
        current_mana -= DEATH_KNIGHT_ULTIMATE_SPELL_MANA_COST;
        std::cout << getName() << " casted " << DEATH_KNIGHT_BASIC_SPELL_NAME << " for " << DEATH_KNIGHT_BASIC_SPELL_MANA_COST << " mana\n";
        setMana(current_mana);
        castFreeBasicSpell();
    }
}