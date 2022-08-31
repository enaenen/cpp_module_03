#pragma once

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public virtual ClapTrap, ScavTrap, FragTrap {
   private:
	std::string name;
	/* data */
   public:
	DiamondTrap( void );
	DiamondTrap( std::string name );
	DiamondTrap( const DiamondTrap& ref );
	~DiamondTrap( void );

	DiamondTrap& operator=( const DiamondTrap& ref );

	virtual std::string getName( void ) const;
	virtual void setName( std::string name );

	virtual void attack( const std::string& target );
	void whoami( void );
	void printRelationName( void );
};