#include "ClapTrap.hpp"

int main( void ) {
	{
		std::cout
			<< "==============Constructor & Destructor TEST=================="
			<< std::endl;
		ClapTrap defTrap;
		ClapTrap CT1( "ONE" );
		ClapTrap CT2( "TWO" );
		ClapTrap CT3( CT2 );
		ClapTrap none;

		none = CT3;
	}

	{
		std::cout << std::endl
				  << "============== attack & takeDamage TEST=================="
				  << std::endl;
		ClapTrap CT1( "A" );
		ClapTrap CT2( "B" );

		CT1.setAttackDamage( 5 );
		CT1.attack( "B" );
		CT2.takeDamage( CT1.getAttackDamage() );
		CT1.setAttackDamage( 5 );
		CT1.attack( "B" );
		CT2.takeDamage( CT1.getAttackDamage() );
		CT1.attack( "B" );
		CT2.takeDamage( CT1.getAttackDamage() );
		CT1.setEnergyPoints( 0 );
		CT1.attack( "B" );
		std::cout << std::endl;
	}

	{
		std::cout << std::endl
				  << "============== beRepaired TEST =================="
				  << std::endl;
		ClapTrap CT1( "A" );
		ClapTrap CT2( "B" );

		CT1.setEnergyPoints( 2 );
		CT1.beRepaired( 1 );
		CT1.takeDamage( 9 );
		CT1.beRepaired( 100 );
		CT1.takeDamage( 10 );
		CT1.beRepaired( 1 );

		CT1.toString();
		CT2.toString();
	}
}