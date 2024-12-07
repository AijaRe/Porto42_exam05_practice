#pragma once
#include <iostream>
#include "ASpell.hpp"

using namespace std;

class Fireball : public ASpell {
    public:
        ~Fireball();
        Fireball();
    
        Fireball*             clone() const;
    
};

