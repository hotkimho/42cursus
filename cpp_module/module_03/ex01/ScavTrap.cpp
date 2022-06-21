
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(){
    std::cout << name << " ScavTrap Default constrictor called " << std::endl;
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    std::cout << name << " ScavTrap Name constrictor called " << std::endl;
    this->name = name;
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy) {
    std::cout << name << " ScavTrap Copy constrictor called " << std::endl;
    *this = copy;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &copy) {
    std::cout << name << " ScavTrap Copy assignment constrictor called " << std::endl;
    this->name = copy.name;
    this->hitPoints = copy.hitPoints;
    this->energyPoints = copy.energyPoints;
    this->attackDamage = copy.attackDamage;
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << name << " ScavTrap Destructor called" << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap "<< name << " enterred in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string &target) {
    if (hitPoints <= 0 || energyPoints <= 0)
    {
        std::cout << "ScavTrap "<< name << " already dead" << std::endl;
        return;
    }
    std::cout << "ScavTrap " << name << " attacks " << target << ", causing ";
    std::cout << attackDamage << " points of damage!" << std::endl;
}

int ScavTrap::getPoint() {
    return hitPoints;
}