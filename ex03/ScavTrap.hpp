#pragma once

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap {
   protected:
	static const int scavHP = 100;
	static const int scavEP = 50;
	static const int scavAD = 20;

   public:
	ScavTrap( void );
	ScavTrap( std::string name );
	ScavTrap( const ScavTrap &ref );
	ScavTrap &operator=( const ScavTrap &ref );
	virtual ~ScavTrap( void );

	virtual void attack( const std::string &target );
	void guardGate( void );
};
