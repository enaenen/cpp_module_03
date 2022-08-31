#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap() {
	std::cout << name << " [ ScavTrap ] Default Constructor " << std::endl;
	hp = scavHP;
	ep = scavEP;
	ad = scavAD;
	maxHP = scavHP;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap( name ) {
	std::cout << name << " [ ScavTrap ] ScavTrap(name) Constructor Called "
			  << std::endl;
	hp = scavHP;
	ep = scavEP;
	ad = scavAD;
	maxHP = scavHP;
}

ScavTrap::ScavTrap( const ScavTrap &ref ) : ClapTrap( ref.getName() ) {
	std::cout << ref.getName()
			  << " [ ScavTrap ] ScavTrap(&ScavTrap) Constructor Called "
			  << std::endl;
	*this = ref;
}

ScavTrap &ScavTrap::operator=( const ScavTrap &ref ) {
	std::cout << ref.getName() << " [ ScavTrap ] copy assignment Called "
			  << std::endl;
	if ( this != &ref ) {
		name = ref.getName();
		hp = ref.getHitPoints();
		ep = ref.getEnergyPoints();
		ad = ref.getAttackDamage();
	}
	return *this;
}

ScavTrap::~ScavTrap( void ) {
	std::cout << name << " [ ScavTrap ] Destructor Called." << std::endl;
}

void ScavTrap::attack( const std::string &target ) {
	if ( ep == 0 ) {
		std::cout << name << " <<< Not enough energy! >>>" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << name << " attacks " << target << ", causing "
			  << ad << " points of damage!" << std::endl;
	ep--;
}

void ScavTrap::guardGate( void ) {
	std::cout << name << " ScavTrap is now Gate keeper mode." << std::endl;
}
