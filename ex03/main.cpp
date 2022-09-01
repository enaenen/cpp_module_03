#include "DiamondTrap.hpp"

int main( void ) {
	std::cout << "==================== Constructor START ===================="
			  << std::endl;

	DiamondTrap d1( "AAA" );

	std::cout << std::endl;
	DiamondTrap d2( "BBBB" );
	std::cout << std::endl;

	DiamondTrap d3( "C" );
	std::cout << std::endl;

	DiamondTrap d4;
	std::cout << std::endl;
	ClapTrap *ptr;

	std::cout << "==================== Constructor END ===================="
			  << std::endl
			  << std::endl;
	;
	std::cout << "==================== CopyAssignment TEST ===================="
			  << std::endl;
	d4 = d3;
	std::cout << std::endl;

	std::cout << "==================== DiamondClap In ScavTrap Pointer ====================" << std::endl;
	ptr = &d1;
	ptr->attack( "BBBB" );
	
	std::cout << "==================== attack ====================" << std::endl;
	d2.toString();
	d1.attack("BBBB");
	d2.takeDamage(d1.getAttackDamage());
	std::cout << "==================== whoami ====================" << std::endl;
	d1.whoami();
	std::cout << "==================== printRealtionName ====================" << std::endl;
	d1.printRelationName();

	d1.toString();
	d1.attack( "BBBB" );
	d2.takeDamage( d1.getAttackDamage() );
	d2.highFiveGuys();

	d2.toString();
	std::cout << "==================== Destructor Call ===================="
			  << std::endl;
}