#include "ASpell.hpp"
#include "ATarget.hpp"

ASpell::ASpell() : _name("noname"), _effects("noeffects") {}

ASpell::ASpell(std::string name, std::string effects) : _name(name), _effects(effects) {
}

ASpell::~ASpell() {
}

ASpell::ASpell(const ASpell& copy) : _name(copy._name), _effects(copy._effects) {}

ASpell& ASpell::operator=(const ASpell& src) {
    if (this != &src)
    {
        _name = src._name;
        _effects = src._effects;
    }
    return *this;
}

const std::string& ASpell::getName() const {
    return _name;
}

const std::string& ASpell::getEffects() const {
    return _effects;
}

void    ASpell::launch(const ATarget& target) const {
    target.getHitBySpell(*this);
}
