#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap() {
	std::cout << getName() << " [ FragTrap ] Default Constructor " << std::endl;
	hp = fragHP;
	ep = fragEP;
	ad = fragAD;
	maxHP = fragHP;
}

FragTrap::FragTrap( std::string name ) : ClapTrap( name ) {
	std::cout << getName() << " [ FragTrap ] FragTrap(name) Constructor Called "
			  << std::endl;
	hp = fragHP;
	ep = fragEP;
	ad = fragAD;
	maxHP = fragHP;
}

FragTrap::FragTrap( const FragTrap &ref ) : ClapTrap( ref.getName() ) {
	std::cout << ref.getName()
			  << " [ FragTrap ] FragTrap(&FragTrap) Constructor Called "
			  << std::endl;
	*this = ref;
}

FragTrap &FragTrap::operator=( const FragTrap &ref ) {
	std::cout << ref.getName() << " [ FragTrap ] copy assignment Called "
			  << std::endl;
	if ( this != &ref ) {
		name = ref.getName();
		hp = ref.getHitPoints();
		ep = ref.getEnergyPoints();
		ad = ref.getAttackDamage();
	}
	return *this;
}

FragTrap::~FragTrap( void ) {
	std::cout << getName() << " [ FragTrap ] Destructor Called." << std::endl;
}

void FragTrap::attack( const std::string &target ) {
	if ( ep == 0 ) {
		std::cout << getName() << " <<< Not enough energy! >>>" << std::endl;
		return;
	}
	std::cout << "FragTrap " << name << " attacks " << target << ", causing "
			  << ad << " points of damage!" << std::endl;
	ep--;
}

void FragTrap::highFiveGuys( void ) {
	std::cout << getName() << " *** FragTrap HIGH FIVE !!! *** " << std::endl;
}
