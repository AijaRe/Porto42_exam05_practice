#pragma once
#include <iostream>

using namespace std;
class ASpell;

class ATarget {
    public:
        ATarget();
        ATarget(std::string type);
        virtual ~ATarget();
        ATarget(const ATarget& copy);
        ATarget& operator=(const ATarget& src);

        const std::string&  getType() const;
        virtual ATarget*     clone() const = 0;
        void         getHitBySpell(const ASpell& spell) const;
        
    private:
        std::string _type;
};

