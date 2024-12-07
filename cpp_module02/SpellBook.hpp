#pragma once
#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"

using namespace std;

class ASpell;

class SpellBook {
	public:
		SpellBook();
		~SpellBook();

		void	learnSpell(const ASpell* spell);
		void	forgetSpell(const string& spell);
		ASpell*	createSpell(const string& spell);
	private:
		SpellBook(SpellBook& copy);
		SpellBook& operator=(SpellBook& src);
		
		std::map <std::string, ASpell*> _spells;
};

