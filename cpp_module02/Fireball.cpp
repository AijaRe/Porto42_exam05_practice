#include "Fireball.hpp"
#include "ATarget.hpp"

Fireball::Fireball() : ASpell("Fireball", "burnt to a crisp") {}

Fireball::~Fireball() {
}

Fireball*    Fireball::clone() const {
    //cout << "cloning Fireball" << endl;
    return new Fireball(*this);
}

