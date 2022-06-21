
#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
    public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &copy);
    ClapTrap& operator=(const ClapTrap &copy);
    ~ClapTrap();

    void attack(const std::string& target);
    void takeDamege(unsigned int amount);
    void beRepaired(unsigned int amount);

    private:
    std::string name;
    int hitPoints;
    int energyPoints;
    int attackDamage;

};

#endif