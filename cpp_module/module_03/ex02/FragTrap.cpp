
#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(){
    std::cout << name << " FragTrap Default constrictor called " << std::endl;
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    std::cout << name << " FragTrap Name constrictor called " << std::endl;
    this->name = name;
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy) {
    std::cout << name << " FragTrap Copy constrictor called " << std::endl;
    *this = copy;
}

FragTrap& FragTrap::operator=(const FragTrap &copy) {
    std::cout << name << " FragTrap Copy assignment constrictor called " << std::endl;
    this->name = copy.name;
    this->hitPoints = copy.hitPoints;
    this->energyPoints = copy.energyPoints;
    this->attackDamage = copy.attackDamage;
    return *this;
}

FragTrap::~FragTrap() {
    std::cout << name << " FragTrap Destructor called" << std::endl;
}


void FragTrap::attack(const std::string &target) {
    if (hitPoints <= 0 || energyPoints <= 0)
    {
        std::cout << "FragTrap "<< name << " already dead" << std::endl;
        return;
    }
    std::cout << "FragTrap " << name << " attacks " << target << ", causing ";
    std::cout << attackDamage << " points of damage!" << std::endl;
}

int FragTrap::getPoint() {
    return hitPoints;
}

void FragTrap::highFivesGuys() {
    std::cout << "FragTrap " << name << " high fives request" << std::endl;
}