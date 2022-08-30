#include "ClapTrap.hpp"

int main( void ) {
	/*
	시나리오 1
	모든 생성자로 생성

	*/
	ClapTrap defTrap;
	ClapTrap CT1( "ONE" );
	ClapTrap CT2( "TWO" );
	ClapTrap CT3( CT2 );
	ClapTrap none;

	/*
	3개의 클랩트랩들의 상태값 출력
	*/
	defTrap.toString();
	CT1.toString();
	CT2.toString();
	CT3.toString();

	/*
	none = CT3;

	std::cout << std::endl;
	CT1.attack( "TWO" );
	CT2.takeDamage( CT1.getAttackDamage() );
	*/
}