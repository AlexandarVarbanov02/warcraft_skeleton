// This is just an example skeleton file. Modify it if needed

#ifndef HEROES_H_
#define HEROES_H_

#include <string>

class Archmage {
 public:
  Archmage(const std::string& name, int maxMana, int baseManaRegenRate,
           int manaRegenModifier) {}
};

class DeathKnight {
 public:
  DeathKnight(const std::string& name, int maxMana, int baseManaRegenRate) {}
};

class DrawRanger {
 public:
  DrawRanger(const std::string& name, int maxMana, int baseManaRegenRate) {}
};

#endif /* HEROES_H_ */