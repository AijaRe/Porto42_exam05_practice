#include "ATarget.hpp"

ATarget::ATarget(string type): _type(type) {};

ATarget::~ATarget() {};

ATarget::ATarget() : _type("notype") {};

ATarget::ATarget(const ATarget& copy) : _type(copy._type) {};

ATarget& ATarget::operator=(const ATarget& src) {
	if (this != &src){
		_type = src._type;
	}
	return *this;
};

const string& ATarget::getType() const {
	return _type;
};

void	ATarget::getHitBySpell(const ASpell& spell) const {
	cout << _type << " has been " << spell.getEffects() << "!" << endl;
};
