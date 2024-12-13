#include "ASpell.hpp"

ASpell::ASpell(string name, string effects): _name(name), _effects(effects) {};

ASpell::~ASpell() {};

ASpell::ASpell() : _name("noname"), _effects("noeffects") {};

ASpell::ASpell(ASpell& copy) : _name(copy._name), _effects(copy._effects) {};

ASpell& ASpell::operator=(ASpell& src) {
	if (this != &src){
		_name = src._name;
		_effects = src._effects;
	}
	return *this;
};


const string& ASpell::getName() const {
	return _name;
};

const string& ASpell::getEffects() const {
	return _effects;
};

void	ASpell::launch(const ATarget& target) const {
	target.getHitBySpell(*this);
};
