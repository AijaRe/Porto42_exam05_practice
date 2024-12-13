#pragma once

#include <iostream>
#include <map>
#include "ASpell.hpp"
using namespace std;

class SpellBook {
	public:
		SpellBook();
		~SpellBook();

		void	learnSpell(ASpell* spell);
		void	forgetSpell(string const& spellName);
		ASpell* createSpell(string const& spellName);


	private:

		SpellBook(SpellBook& copy);
		SpellBook& operator=(SpellBook& src);

		map<string, ASpell*> _spells;
};
