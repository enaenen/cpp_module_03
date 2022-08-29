#include "ClapTrap.hpp"

int main( void ) {
	ClapTrap defTrap( void );
	ClapTrap CT1( "ONE" );
	ClapTrap CT2( "TWO" );
	ClapTrap CT3( CT2 );
	ClapTrap none;

	CT1.toString();
	CT2.toString();
	CT3.toString();
	none = CT3;

	std::cout << std::endl;
	CT1.attack( "TWO" );
	CT2.takeDamage( CT1.getAttackDamage() );
}