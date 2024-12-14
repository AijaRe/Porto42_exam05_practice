#pragma once

#include <iostream>
#include "ATarget.hpp"
using namespace std;

class ATarget;

class ASpell {
	public:
		ASpell(string name, string effects);
		virtual ~ASpell();
		ASpell();
		ASpell(const ASpell& copy);
		ASpell& operator=(const ASpell& src);

		const string& getName() const;
		const string& getEffects() const;
		virtual ASpell*	clone() const = 0;
		void	launch(const ATarget& target) const;

	private:
		string _name;
		string _effects;
};
