#pragma once

#include <iostream>

class ClapTrap {
   protected:
	std::string name;
	unsigned int hp;
	unsigned int ep;
	unsigned int ad;
	unsigned int maxHP;
	static const unsigned int defaultHP = 10;
	static const unsigned int defaultEP = 10;
	static const unsigned int defaultAD = 0;

   public:
	ClapTrap( void );
	ClapTrap( std::string name );
	ClapTrap( const ClapTrap& ref );
	virtual ~ClapTrap( void );

	ClapTrap& operator=( const ClapTrap& ref );

	virtual std::string getName( void ) const;
	unsigned int getHitPoints( void ) const;
	unsigned int getEnergyPoints( void ) const;
	unsigned int getAttackDamage( void ) const;
	unsigned int getMaxHP( void ) const;

	virtual void setName( std::string name );
	void setHitPoints( unsigned int hp );
	void setEnergyPoints( unsigned int ep );
	void setAttackDamage( unsigned int ad );
	void setMaxHP( unsigned int maxHP );

	virtual void attack( const std::string& target );
	void takeDamage( unsigned int amount );
	void beRepaired( unsigned int amount );

	void toString( void );
};
