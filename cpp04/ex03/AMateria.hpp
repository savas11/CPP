#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"

class	ICharacter;

class	AMateria{

	protected:
		std::string type;
	public:
		AMateria( std::string const &type );
		AMateria();
		AMateria( const AMateria &ref );
		AMateria &operator=( const AMateria &ref );
		virtual ~AMateria();

		std::string const &getType( ) const; // Returns the materia type

		virtual AMateria *clone( ) const = 0;
		virtual void use( ICharacter &target );
};

#endif
