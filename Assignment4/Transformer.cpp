//Fadeev Eugene st128225@student.spbu.ru
//This code contains implementation of transformer class for assignment 4.


#include <string>
#include <iostream>
#include "Vehicle.h"
#include "Weapon.h"
#include "Transformer.h"


Transformer::Transformer()
    :name("Unknown"), health(100), level(1), strength(10), perception(10), weapon(), vehicle(nullptr)
{
    std::cout << "Transformer " << name << " is created." << std::endl;
}

Transformer::Transformer(const std::string& name, unsigned health, unsigned level, unsigned strength, unsigned perception, const Weapon& weapon)
    :name(name), health(health), level(level), strength(strength), perception(perception), weapon(weapon), vehicle(nullptr)
{
    std::cout << "Transformer " << name << " is created." << std::endl;
}

Transformer::~Transformer()
{
    std::cout << "Transformer " << name << " is destroyed." << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Transformer& t)
{
    os << "Transformer: " << t.getName() << "\n"
       << "Health: " << t.getHealth() << "\n"
       << "Level: " << t.getLevel() << "\n"
       << "Strength: " << t.getStrength() << "\n"
       << "Perception: " << t.getPerception() << "\n"
       << "Weapon: " << t.weapon.getType() << " (Damage: " << t.weapon.getDamage() << ") \n";
    return os;
}

bool Transformer::operator>(const Transformer& other) const
{
    return strength > other.strength;
}

bool Transformer::operator<(const Transformer& other) const
{
    return strength < other.strength;
}


const std::string& Transformer::getName() const
{
    return name;
}
const unsigned& Transformer::getHealth() const
{
    return health;
}
const unsigned& Transformer::getLevel() const
{
    return level;
}
const unsigned& Transformer::getStrength() const
{
    return strength;
}
const unsigned& Transformer::getPerception() const
{
    return perception;
}
const Weapon& Transformer::getWeapon() const
{
    return weapon;
}
const Vehicle* Transformer::getVehicle() const
{
    return vehicle;
}

void Transformer::setName(const std::string& name)
{
    this->name = name;
}
void Transformer::setHealth(unsigned health)
{
    this->health = health;
}
void Transformer::setLevel(unsigned level)
{
    this->level = level;
}
void Transformer::setStrength(unsigned strength)
{
    this->strength = strength;
}
void Transformer::setPerception(unsigned perception)
{
    this->perception = perception;
}
void Transformer::setWeapon(const Weapon& weapon)
{
    this->weapon = weapon;
}
void Transformer::assignVehicle(Vehicle* v)
{
    vehicle = v;
}

bool Transformer::transform()
{
    return (true);
}
bool Transformer::attack()
{
    return (true);
}

