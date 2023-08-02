#include "../Heroes/Hero.h"

Hero::Hero(const std::string& name, size_t maxMana, size_t baseManaRegenRate)
{
    m_name = name;
    m_max_mana = maxMana;
    m_mana = maxMana;
    m_mana_regenerate = baseManaRegenRate;
}

const std::string& Hero::getName() const
{
    return m_name;
}

const size_t Hero::getMaxMana() const
{
    return m_max_mana;
}

const size_t Hero::getMana() const
{
    return m_mana;
}

const size_t Hero::getManaRegenerate() const
{
    return m_mana_regenerate;
}

void Hero::regenerateMana()
{
    m_mana += m_mana_regenerate;
    if(m_max_mana < m_mana)
    {
        m_mana = m_max_mana;
    }
}

void Hero::setMana(size_t mana)
{
    m_mana += mana;
    if(m_mana > m_max_mana)
    {
        m_mana = m_max_mana;
    }
}

void Hero::setManaRegenerate(size_t mana_regenerate)
{
    m_mana_regenerate += mana_regenerate;
    if(m_max_mana < m_mana_regenerate)
    {
        m_mana_regenerate = m_max_mana;
    }
}