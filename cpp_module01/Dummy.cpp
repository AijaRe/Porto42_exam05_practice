#include "Dummy.hpp"
#include "ASpell.hpp"

Dummy::Dummy() : ATarget("Target Practice Dummy") {}

Dummy::~Dummy() {
}

Dummy* Dummy::clone() const {
    return new Dummy(*this);
}
