#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void )
	: ClapTrap( "Noname_clap_name" ),
	  ScavTrap( "Noname_clap_name" ),
	  FragTrap( "Noname_clap_name" ),
	  name( "Noname" ) {
}
DiamondTrap::DiamondTrap( std::string name ) {
}
DiamondTrap::DiamondTrap( const DiamondTrap& ref ) {
}
DiamondTrap::~DiamondTrap( void ) {
}

DiamondTrap& DiamondTrap::operator=( const DiamondTrap& ref ) {
	if ( this != &ref ) {
		ClapTrap::name = ref.ClapTrap::getName();
	}
}

std::string DiamondTrap::getName( void ) const {
	return name;
}
void DiamondTrap::setName( std::string name ) {
	this->name = name;
}

void DiamondTrap::attack( const std::string& target ) {
	ScavTrap::attack( target );
}

void DiamondTrap::whoami( void ) {
	std::cout << "I'm DiamondTrap, " << name << "." << std::endl
			  << "I'm also ClapTrap, " << ClapTrap::name << "." << std::endl;
}
void DiamondTrap::printRelationName( void ) {
	std::cout << "Name as DiamondTrap : " << name << std::endl
			  << "Name as ClapTrap : " << ClapTrap::name << std::endl;
}