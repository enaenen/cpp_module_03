#pragma once

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap {
   protected:
	static const int fragHP = 100;
	static const int fragEP = 100;
	static const int fragAD = 30;

   public:
	FragTrap( void );
	FragTrap( std::string name );
	FragTrap( const FragTrap &ref );
	virtual ~FragTrap( void );

	FragTrap &operator=( const FragTrap &ref );

	virtual void attack( const std::string &target );
	void highFiveGuys( void );
};
