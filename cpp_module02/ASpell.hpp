#pragma once
#include <iostream>

using namespace std;

class ATarget;

class ASpell {
    public:
        ASpell();
        ASpell(std::string name, std::string effects);
        virtual ~ASpell();
        ASpell(const ASpell& copy);
        ASpell& operator=(const ASpell& src);

        const std::string&  getName() const;
        const std::string&  getEffects() const;
        virtual ASpell*     clone() const = 0;
        void                launch(const ATarget& target) const;
        
    private:
        std::string _name;
        std::string _effects;
};

