
#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
    std::cout << name << " ClapTrap Default constrictor called " << std::endl;
    hitPoints = 10;
    energyPoints = 10;
    attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name) {
    std::cout << name << " ClapTrap Name constrictor called " << std::endl;
    this->name = name;
    hitPoints = 10;
    energyPoints = 10;
    attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &copy) {
    std::cout << name << " ClapTrap Copy constrictor called " << std::endl;
    *this = copy;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &copy) {
    std::cout << name << " ClapTrap Copy assignment constrictor called " << std::endl;
    this->name = copy.name;
    this->hitPoints = copy.hitPoints;
    this->energyPoints = copy.energyPoints;
    this->attackDamage = copy.attackDamage;
    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << name <<  " ClapTrap Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target) {
    if (hitPoints <= 0 || energyPoints <= 0)
    {
        std::cout << name << " already dead" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << name << " attacks " << target << std::endl;
}

void ClapTrap::takeDamege(unsigned int amount) {
    if (hitPoints <= 0)
    {
        std::cout << name << " already dead" << std::endl;
        return;
    }
    hitPoints -= amount;
    if (hitPoints <= 0)
    {
        std::cout << name << " died" << std::endl;
        return;
    }
    std::cout << name << " " << hitPoints << " hitPoints left" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (hitPoints <= 0 || energyPoints <= 0)
    {
        std::cout << name << " already dead" << std::endl;
        return;
    }
    hitPoints += amount;
    std::cout << name << " hitPoints repairs " << amount << std::endl;
}