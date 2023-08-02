#include "../Heroes/DrawRanger.h" //needs to be removed
#include "Defines.h" //needs to be removed and relocated
#include <iostream>

void DrawRanger::castBasicSpell()
{
    size_t current_mana = getMana();
    if(current_mana < DRAW_RANGER_BASIC_SPELL_MANA_COST)
    {
        std::cout << getName() << " - not enough mana to cast " << DRAW_RANGER_BASIC_SPELL_NAME << '\n';
        // not enough mana can be added to an const expr in defines.h
    }
    else
    {
        current_mana -= DRAW_RANGER_BASIC_SPELL_MANA_COST;
        std::cout << getName() << " casted " << DRAW_RANGER_BASIC_SPELL_NAME << " for " << DRAW_RANGER_BASIC_SPELL_MANA_COST << " mana\n";
        setMana(current_mana);
        castFreeBasicSpell();        
    }
}

void DrawRanger::castFreeBasicSpell()
{
    std::cout << getName() << " casted " << DRAW_RANGER_BASIC_SPELL_NAME << " for 0 mana\n";
}

void DrawRanger::castUltimateSpell()
{
    size_t current_mana = getMana();
    if(current_mana < DRAW_RANGER_ULTIMATE_SPELL_MANA_COST)
    {
        std::cout << getName() << " - not enough mana to cast " << DRAW_RANGER_ULTIMATE_SPELL_NAME << '\n';
    }
    else
    {
        current_mana -= DRAW_RANGER_ULTIMATE_SPELL_MANA_COST;
        std::cout << getName() << " casted " << DRAW_RANGER_BASIC_SPELL_NAME << " for " << DRAW_RANGER_BASIC_SPELL_MANA_COST << " mana\n";
        setMana(current_mana);
    }
}