#pragma once
#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"

using namespace std;

class ASpell;

class Warlock {
    public:
        Warlock(std::string name, std::string title);
        ~Warlock();

        const std::string&  getName() const;
        const std::string&  getTitle() const;
        void                setTitle(const std::string& title);
        void                introduce() const;
        void                learnSpell(const ASpell* spell);
        void                forgetSpell(std::string spell);
        void                launchSpell(std::string spell, const ATarget& target);
    private:
        Warlock();
        Warlock(Warlock& copy);
        Warlock& operator=(Warlock& src);
        std::string _name;
        std::string _title;
        std::map <std::string, ASpell*> _spells;
};

