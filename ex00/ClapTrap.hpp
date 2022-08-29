#pragma once

#include <iostream>

class ClapTrap {
   private:
	std::string name;
	unsigned int hp;
	unsigned int ep;
	unsigned int ad;
	static const unsigned int maxHP = 10;
	static const unsigned int defaultHP = 10;
	static const unsigned int defaultEP = 10;
	static const unsigned int defaultAD = 0;

   public:
	ClapTrap( void );
	ClapTrap( std::string name );
	ClapTrap( const ClapTrap& ref );
	ClapTrap( std::string name, unsigned int hp, unsigned int ep,
			  unsigned int ad );
	~ClapTrap( void );
	ClapTrap& operator=( const ClapTrap& ref );

	std::string getName( void ) const;
	unsigned int getHitPoints( void ) const;
	unsigned int getEnergyPoints( void ) const;
	unsigned int getAttackDamage( void ) const;
	unsigned int getMaxHP( void ) const;

	void setName( std::string name );
	void setHitPoints( unsigned int hp );
	void setEnergyPoints( unsigned int ep );
	void setAttackDamage( unsigned int ad );
	void setMaxHP( unsigned int maxHP );

	void attack( const std::string& target );
	void takeDamage( unsigned int amount );
	void beRepaired( unsigned int amount );

	void toString( void );
};
