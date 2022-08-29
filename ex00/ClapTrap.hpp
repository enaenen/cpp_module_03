#pragma once

#include <iostream>

class ClapTrap {
   private:
	std::string name;
	unsigned int hitPoints;
	unsigned int energyPoints;
	unsigned int attackDamage;
	unsigned int maxHP;

	static const unsigned int defaultHP( 10 );
	static const unsigned int defaultEP( 10 );
	static const unsigned int defaultAD( 0 );

   public:
	ClapTrap( void );
	ClapTrap();
	ClapTrap( std::string name );
	ClapTrap( const ClapTrap& ref );
	ClapTrap& operator=( const ClapTrap& ref );
	ClapTrap( std::string name, unsigned int hitPoints,
			  unsigned int energyPoints, unsigned int attackDamage );
	~ClapTrap();

	std::string getName( void ) const;
	int getHitPoints( void ) const;
	int getEnergeyPoints( void ) const;
	int getAttackDamage( void ) const;

	void attack( const std::string& target );
	void takeDamage( unsigned int amount );
	void beRepaired( unsigned int amount );
}