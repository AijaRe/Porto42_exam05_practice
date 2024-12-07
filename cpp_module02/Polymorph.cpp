#include "Polymorph.hpp"
#include "ATarget.hpp"

Polymorph::Polymorph() : ASpell("Polymorph", "turned into a critter") {}

Polymorph::~Polymorph() {
}

Polymorph*    Polymorph::clone() const {
    //cout << "cloning Polymorph" << endl;
    return new Polymorph(*this);
}

