// This is just an example skeleton file. Modify it if needed

#include <iostream>
#include <sstream>

#include "Defines.h"
#include "Heroes.h"

int main() {
  std::string name;
  int maxMana = 0;
  int baseManaRegenRate = 0;
  int manaRegenModifier = 0;

  std::cin >> name >> maxMana >> baseManaRegenRate >> manaRegenModifier;
  Archmage archmage(name, maxMana, baseManaRegenRate, manaRegenModifier);

  std::cin >> name >> maxMana >> baseManaRegenRate;
  DeathKnight deathKnight(name, maxMana, baseManaRegenRate);

  std::cin >> name >> maxMana >> baseManaRegenRate;
  DrawRanger drawRanger(name, maxMana, baseManaRegenRate);

  std::cin.ignore();

  std::string input;
  getline(std::cin, input);
  std::istringstream sstr(input);
  int currAction = 0;

  while (sstr >> currAction) {
    switch (currAction) {
      case ActionType::CAST_BASIC_SPELL:
        // Archmage, DeathKnight, DrawRanger cast basic spell
        break;

      case ActionType::CAST_ULTIMATE_SPELL:
        // Archmage, DeathKnight, DrawRanger cast ultimate spell
        break;

      case ActionType::REGENERATE_MANA:
        // Archmage, DeathKnight, DrawRanger regenarate mana
        break;
    }
  }

  return EXIT_SUCCESS;
}
