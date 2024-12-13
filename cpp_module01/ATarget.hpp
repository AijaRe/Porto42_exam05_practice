#pragma once

#include <iostream>
#include "ASpell.hpp"
using namespace std;

class ASpell;

class ATarget {
	public:
		ATarget(string type);
		virtual ~ATarget();
		ATarget();
		ATarget(ATarget& copy);
		ATarget& operator=(ATarget& src);


		const string& getType() const;
		virtual ATarget*	clone() const = 0;
		void	getHitBySpell(const ASpell& spell) const;


	private:
	
		string _type;
};
