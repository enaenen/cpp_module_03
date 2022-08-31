#include "DiamondTrap.hpp"

int main( void ) {
	std::cout << "==================== Constructor START ===================="
			  << std::endl;

	FragTrap ft1( "SCAV ONE" );
	FragTrap ft2( "BBBB" );

	FragTrap ft3( "C" );
	FragTrap ft4;
	// ClapTrap *ptr;

	std::cout << "==================== Constructor END ===================="
			  << std::endl
			  << std::endl;
	;
	std::cout << "==================== CopyAssignment TEST ===================="
			  << std::endl;
	ft4 = ft3;
	std::cout << std::endl;

	// ptr = &ft1;
	// ptr->attack( "BBBB" );

	ft2.toString();
	ft1.attack( "BBBB" );
	ft2.takeDamage( ft1.getAttackDamage() );
	ft2.highFiveGuys();

	ft2.toString();
	std::cout << "==================== Destructor Call ===================="
			  << std::endl;
}