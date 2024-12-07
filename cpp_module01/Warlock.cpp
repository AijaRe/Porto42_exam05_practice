#include "Warlock.hpp"

Warlock::Warlock() : _name("noname"), _title("notitle") {}

Warlock::Warlock(std::string name, std::string title) : _name(name), _title(title) {
    cout << _name << ": This looks like another boring day." << endl;
}

Warlock::~Warlock() {
    cout << _name << ": My job here is done!" << endl;
    map<string, ASpell*>::iterator it;
    for (it = _spells.begin(); it != _spells.end(); it++)
        delete it->second;
    _spells.clear();
}

Warlock::Warlock(Warlock& copy) : _name(copy._name), _title(copy._title) {}

Warlock& Warlock::operator=(Warlock& src) {
    if (this != &src)
    {
        _name = src._name;
        _title = src._title;
    }
    map<string, ASpell*>::iterator it;
    for (it = _spells.begin(); it != _spells.end(); it++)
        delete it->second;
    _spells.clear();
    map<string, ASpell*>::iterator it2;
    for (it2 = src._spells.begin(); it2 != src._spells.end(); it2++)
        _spells[it2->first] = it2->second->clone();
    return *this;
}

const std::string& Warlock::getName() const {
    return _name;
}

const std::string& Warlock::getTitle() const {
    return _title;
}

void    Warlock::setTitle(const std::string& title) {
    _title = title;
}

void    Warlock::introduce() const {
    cout << _name << ": I am " << _name << ", " << _title << "!" << endl;
}

void    Warlock::learnSpell(const ASpell* spell) {
    if (spell) {
        if (_spells.find(spell->getName()) == _spells.end())
            _spells[spell->getName()] = spell->clone();  
    }
}

void    Warlock::forgetSpell(std::string spell) {
    if (_spells.find(spell) != _spells.end()) {
        delete _spells[spell];
        _spells.erase(spell);
    }
}


void    Warlock::launchSpell(std::string spell, const ATarget& target) {
    if (_spells.find(spell) != _spells.end())
        _spells[spell]->launch(target);
}
