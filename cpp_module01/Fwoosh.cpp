#include "Fwoosh.hpp"
#include "ATarget.hpp"

Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooshed") {}

Fwoosh::~Fwoosh() {
}

Fwoosh*    Fwoosh::clone() const {
    //cout << "cloning Fwoosh" << endl;
    return new Fwoosh(*this);
}

