#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void ) {
	std::cout << "==================== Constructor START ===================="
			  << std::endl;

	ScavTrap sc1( "SCAV ONE" );
	ScavTrap sc2( "BBBB" );

	ScavTrap sc3( "C" );
	ScavTrap sc4;
	ClapTrap *ptr;

	std::cout << "==================== Constructor END ===================="
			  << std::endl
			  << std::endl;
	;
	std::cout << "==================== CopyAssignment TEST ===================="
			  << std::endl;
	sc4 = sc3;
	std::cout << std::endl;

	ptr = &sc1;
	ptr->attack( "sc2" );

	sc2.toString();
	sc1.attack( "sc2" );
	sc2.takeDamage( sc1.getAttackDamage() );
	sc2.guardGate();

	sc2.toString();
	std::cout << "==================== Destructor Call ===================="
			  << std::endl;
}