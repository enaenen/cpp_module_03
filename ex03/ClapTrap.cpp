#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void )
	: name( "NoName" ),
	  hp( defaultHP ),
	  ep( defaultEP ),
	  ad( defaultAD ),
	  maxHP( defaultHP ) {
	std::cout << name << " [ ClapTrap ] Called ClapTrap() Constructor ***"
			  << std::endl;
}
ClapTrap::ClapTrap( std::string name )
	: name( name ),
	  hp( defaultHP ),
	  ep( defaultEP ),
	  ad( defaultAD ),
	  maxHP( defaultHP ) {
	std::cout << name << " [ ClapTrap ] Called ClapTrap(name) Constructor ***"
			  << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& ref ) {
	std::cout << name
			  << " [ ClapTrap ] Called ClapTrap(ClapTrap& ref) Constructor ***"
			  << std::endl;
	*this = ref;
}

ClapTrap::~ClapTrap() {
	std::cout << name << " [ ClapTrap ] Called ~ClapTrap() Destructor ***"
			  << std::endl;
}
ClapTrap& ClapTrap::operator=( const ClapTrap& ref ) {
	std::cout << " [ ClapTrap ] Called Operator=() ***" << std::endl;

	if ( this != &ref ) {
		name = ref.getName();
		hp = ref.getHitPoints();
		ep = ref.getEnergyPoints();
		ad = ref.getAttackDamage();
		maxHP = ref.getMaxHP();
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
	if ( ep == 0 ) {
		std::cout << getName() << " <<< Not enough energy! >>>" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << getName() << " attacks " << target << ", causing "
			  << ad << " points of damage!" << std::endl;
	ep--;
}

void ClapTrap::takeDamage( unsigned int amount ) {
	if ( hp == 0 ) {
		std::cout << getName() << " <<< ALREADY DESTROYED >>>" << std::endl;
		return;
	}
	unsigned int prevHP = hp;
	if ( hp <= amount )
		hp = 0;
	else
		hp -= amount;
	std::cout << getName() << " takes " << prevHP - hp << " damage." << std::endl;
	if ( hp == 0 )
		std::cout << getName() << " <<< TOTALLY WRACKED >>>" << std::endl;
}

void ClapTrap::beRepaired( unsigned int amount ) {
	if ( ep == 0 ) {
		std::cout << getName() << " : "
				  << " Has No EnergyPoints " << std::endl;
		return;
	}
	if ( hp == 0 ) {
		std::cout << getName() << " HP IS 0  <<< UNRECOVERBLE >>> " << std::endl;
		return;
	}
	if ( hp == maxHP ) {
		std::cout << getName() << " : <<< HP is Already FULL >>>" << std::endl;
		return;
	}
	unsigned int prevHP = hp;
	ep--;
	if ( maxHP - hp <= amount )
		hp = maxHP;
	else
		hp += amount;
	std::cout << getName() << " : " << hp - prevHP << "HP REPARIED." << std::endl;
	if ( hp == maxHP )
		std::cout << getName() << " HP IS FULLY CHARGED " << std::endl;
}
void ClapTrap::toString( void ) {
	std::cout << std::endl
			  << "name : " << getName() << std::endl
			  << "hp : " << hp << std::endl
			  << "ep : " << ep << std::endl
			  << "ad : " << ad << std::endl
			  << std::endl;
}