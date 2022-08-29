#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void )
	: name( "NoName" ),
	  hitPoints( defaultHP ),
	  energyPoints( defaultEP ),
	  attackDamage( defaultAD ){};
ClapTrap::~ClapTrap() {}
ClapTrap::ClapTrap( std::string name, unsigned int hitPoints,
					unsigned int energyPoints, unsigned int attackDamage )
	: name( name ),
	  hitPoints( hitPoints ),
	  energyPoints( energyPoints ),
	  attackDamage( attackDamage ) {}
ClapTrap::ClapTrap( std::string name ) {}

void ClapTrap::attack( const std::string& target ) {}
void ClapTrap::takeDamage( unsigned int amount ) {}
void ClapTrap::beRepaired( unsigned int amount ) {}