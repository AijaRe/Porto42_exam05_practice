#pragma once
#include <iostream>
#include "ASpell.hpp"

using namespace std;

class Fwoosh : public ASpell {
    public:
        ~Fwoosh();
        Fwoosh();
    
        Fwoosh*             clone() const;
    
};

