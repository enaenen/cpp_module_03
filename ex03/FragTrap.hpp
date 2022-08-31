#pragma once

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
   protected:
	static const int fragHP = 100;
	static const int fragEP = 100;
	static const int fragAD = 30;

   public:
	FragTrap( void );
	FragTrap( std::string name );
	FragTrap( const FragTrap &ref );
	FragTrap &operator=( const FragTrap &ref );
	virtual ~FragTrap( void );

	virtual void attack( const std::string &target );
	void highFiveGuys( void );
};
