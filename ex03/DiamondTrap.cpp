#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void )
	: ClapTrap( "Noname_clap_name" ),
	  ScavTrap( "Noname_clap_name" ),
	  FragTrap( "Noname_clap_name" ),
	  name( "Noname" ) {
	std::cout << name << " [ DiamondTrap ] Default Constructor Called"
			  << std::endl;
	hp = fragHP;
	ep = scavEP;
	ad = fragAD;
	maxHP = fragHP;
}
DiamondTrap::DiamondTrap( std::string name )
	: ClapTrap( name + "_clap_name" ),
	  ScavTrap( name + "_clap_name" ),
	  FragTrap( name + "_clap_name" ),
	  name( name ) {
	std::cout << name
			  << " [ DiamondTrap ] DiamonTrap( name ) Constructor Called"
			  << std::endl;
	hp = fragHP;
	ep = scavEP;
	ad = fragAD;
	maxHP = fragHP;
}
DiamondTrap::DiamondTrap( const DiamondTrap& ref )
	: ClapTrap( ref.ClapTrap::getName() ),
	  ScavTrap( ref.ClapTrap::getName() ),
	  FragTrap( ref.ClapTrap::getName() ) {
	std::cout << name
			  << " [ DiamondTrap ] DiamonTrap( DiamondTrap &ref ) "
				 "Constructor Called"
			  << std::endl;
	*this = ref;
}
DiamondTrap::~DiamondTrap( void ) {
}

DiamondTrap& DiamondTrap::operator=( const DiamondTrap& ref ) {
	std::cout << name << " [ DiamondTrap ] DiamondTrap copy assignment called."
			  << std::endl;
	if ( this != &ref ) {
		ClapTrap::name = ref.ClapTrap::getName();
		name = ref.getName();
		hp = ref.getHitPoints();
		ep = ref.getEnergyPoints();
		ad = ref.getAttackDamage();
	}
	return *this;
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