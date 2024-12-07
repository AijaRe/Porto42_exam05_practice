#include "SpellBook.hpp"

SpellBook::SpellBook() {}


SpellBook::~SpellBook() {
    map<string, ASpell*>::iterator it;
    for (it = _spells.begin(); it != _spells.end(); it++)
        delete it->second;
    _spells.clear();
}

SpellBook::SpellBook(SpellBook& copy) {
    *this = copy;
}

SpellBook& SpellBook::operator=(SpellBook& src) {
    if (this != &src)
    {
        map<string, ASpell*>::iterator it;
        for (it = _spells.begin(); it != _spells.end(); it++)
            delete it->second;
        _spells.clear();
        map<string, ASpell*>::iterator it2;
        for (it2 = src._spells.begin(); it2 != src._spells.end(); it2++)
            _spells[it2->first] = it2->second->clone();
    }
    return *this;
}

void    SpellBook::learnSpell(const ASpell* spell) {
    if (spell) {
        if (_spells.find(spell->getName()) == _spells.end())
            _spells[spell->getName()] = spell->clone();  
    }
}

void    SpellBook::forgetSpell(const string& spell) {
    if (_spells.find(spell) != _spells.end()) {
        delete _spells[spell];
        _spells.erase(spell);
    }
}

ASpell*    SpellBook::createSpell(const string& spell) {
    ASpell* newSpell = NULL;
    if (_spells.find(spell) != _spells.end())
        newSpell = _spells[spell];
    return newSpell;
}
