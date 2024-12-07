#include "ATarget.hpp"
#include "ASpell.hpp"

ATarget::ATarget() : _type("notype") {}

ATarget::ATarget(std::string type) : _type(type) {
}

ATarget::~ATarget() {
}

ATarget::ATarget(const ATarget& copy) : _type(copy._type) {}

ATarget& ATarget::operator=(const ATarget& src) {
    if (this != &src)
    {
        _type = src._type;
    }
    return *this;
}

const std::string& ATarget::getType() const {
    return _type;
}

void    ATarget::getHitBySpell(const ASpell& spell) const {
    if (!this->getType().empty())
        cout << this->getType() << " has been " << spell.getEffects() << "!" << endl;
}
