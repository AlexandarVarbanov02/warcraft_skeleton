#ifndef HERO_H_
#define HERO_H_

#include <string>

class Hero
{
public:
    Hero(const std::string& name, size_t maxMana, size_t baseManaRegenRate);

    virtual void castBasicSpell() = 0;
    virtual void castUltimateSpell() = 0;
    virtual void regenerateMana();

    const std::string& getName() const;
    const size_t getMaxMana() const;
    const size_t getMana() const;
    const size_t getManaRegenerate() const;

    void setMana(size_t mana);
    void setManaRegenerate(size_t mana_regenerate);

    virtual ~Hero() = default;

private:
    std::string m_name;
    size_t m_max_mana;
    size_t m_mana; //current
    size_t m_mana_regenerate;

    //std::string m_message_output; = "class name" casted "ability name" for "mana spent" mana
};


#endif /* HERO_H_ */