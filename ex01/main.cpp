#include "ScavTrap.hpp"

int main( void ) {
	ScavTrap sc1( "SCAV ONE" );
	ScavTrap sc2( " BBBB " );
	ClapTrap *ptr;

	ptr = &sc1;
	sc1.attack( "XXX" );
	ptr->attack( "XER" );
}