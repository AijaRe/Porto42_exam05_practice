#pragma once

#include <iostream>
#include <map>
#include "ASpell.hpp"
using namespace std;

class Warlock {
	public:
		Warlock(string name, string title);
		~Warlock();

		const string& getName() const;
		const string& getTitle() const;
		void	setTitle(const string& title);
		void	introduce() const;

		void	learnSpell(ASpell* spell);
		void	forgetSpell(string spellName);
		void	launchSpell(string spellName, ATarget& target);


	private:
		Warlock();
		Warlock(Warlock& copy);
		Warlock& operator=(Warlock& src);

		string _name;
		string _title;
		map<string, ASpell*> _spells;
};
