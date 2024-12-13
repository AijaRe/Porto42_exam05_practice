#include "Warlock.hpp"

Warlock::Warlock(string name, string title): _name(name), _title(title) {
	cout << _name << ": This looks like another boring day." << endl;
};

Warlock::~Warlock() {
	cout << _name << ": My job here is done!" << endl;
	map<string, ASpell*>::iterator it;

	for (it = _spells.begin(); it != _spells.end(); it++) {
		delete it->second;
	}
	_spells.clear();
};

const string& Warlock::getName() const {
	return _name;
};

const string& Warlock::getTitle() const {
	return _title;
};

void	Warlock::setTitle(const string& title) {
	_title = title;
};

void	Warlock::introduce() const {
	cout << _name << ": I am " << _name << ", " << _title << "!" << endl;
};

void	Warlock::learnSpell(ASpell* spell) {
	ASpell* check = spell;
	if (!check)
		return;
	if (_spells.find(spell->getName()) == _spells.end())
		_spells.insert(pair<string, ASpell*>(spell->getName(), spell->clone()));
};

void	Warlock::forgetSpell(string spellName) {
	if (_spells.find(spellName) != _spells.end()){
		delete _spells[spellName];
		_spells.erase(spellName);
	}
};

void	Warlock::launchSpell(string spellName, ATarget& target) {
	if (_spells.find(spellName) != _spells.end()){
		_spells[spellName]->launch(target);
	}
};
