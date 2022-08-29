#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void )
	: name( "NoName" ), hp( defaultHP ), ep( defaultEP ), ad( defaultAD ){};
ClapTrap::ClapTrap( std::string name, unsigned int hp, unsigned int ep,
					unsigned int ad )
	: name( name ), hp( hp ), ep( ep ), ad( ad ) {}
ClapTrap::ClapTrap( std::string name )
	: name( name ), hp( defaultHP ), ep( defaultEP ), ad( defaultAD ){};
ClapTrap::ClapTrap( const ClapTrap& ref ) { *this = ref; }

ClapTrap::~ClapTrap() {}
ClapTrap& ClapTrap::operator=( const ClapTrap& ref ) {
	if ( this != &ref ) {
		name = ref.getName();
		hp = ref.getHitPoints();
		ep = ref.getEnergyPoints();
		ad = ref.getAttackDamage();
	}
	return *this;
}

std::string ClapTrap::getName( void ) const { return name; }
unsigned int ClapTrap::getHitPoints( void ) const { return hp; }
unsigned int ClapTrap::getEnergyPoints( void ) const { return ep; }
unsigned int ClapTrap::getAttackDamage( void ) const { return ad; }
unsigned int ClapTrap::getMaxHP( void ) const { return maxHP; }

void ClapTrap::setName( std::string name ) { this->name = name; }
void ClapTrap::setHitPoints( unsigned int hp ) { this->hp = hp; }
void ClapTrap::setEnergyPoints( unsigned int ep ) { this->ep = ep; }
void ClapTrap::setAttackDamage( unsigned int ad ) { this->ad = ad; }

void ClapTrap::attack( const std::string& target ) {
	std::cout << "ClapTrap " << name << " attacks " << target << ", causing "
			  << ad << " points of damage!" << std::endl;
}
void ClapTrap::takeDamage( unsigned int amount ) {
	if ( hp == 0 ) {
		std::cout << name << "is already Destroyed." << std::endl;
		return;
	}
	unsigned int prevHP = hp;
	if ( hp <= amount )
		hp = 0;
	else
		hp -= amount;
	std::cout << name << " takes " << prevHP - hp << " damage." << std::endl;
	if ( hp == 0 )
		std::cout << name << "is DESTROYED." << std::endl;
}

void ClapTrap::beRepaired( unsigned int amount ) {
	if ( ep == 0 ) {
		std::cout << name << " : "
				  << " Has No EnergyPoints " << std::endl;
		return;
	}
	if ( hp == 0 ) {
		std::cout << name << " HP IS 0  *UNRECOVERBLE* " << std::endl;
		return;
	}
	if ( hp == maxHP ) {
		std::cout << name << " : HP is Already FULL" << std::endl;
		return;
	}
	unsigned int prevHP = hp;
	ep--;
	if ( maxHP - hp <= amount )
		hp = maxHP;
	else
		hp += amount;
	std::cout << name << " : " << hp - prevHP << "HP REPARIED." << std::endl;
	if ( hp == maxHP )
		std::cout << name << " HP IS FULLY CHARGED " << std::endl;
}