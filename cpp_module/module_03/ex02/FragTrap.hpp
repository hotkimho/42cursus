
#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(const FragTrap &copy);
    FragTrap& operator=(const FragTrap &copy);
    ~FragTrap();

    void attack(const std::string& target);
    int getPoint();
    void highFivesGuys();
private:
    std::string name;
    int hitPoints;
    int energyPoints;
    int attackDamage;

};

#endif