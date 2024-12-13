#include "SpellBook.hpp"

SpellBook::SpellBook() {};

SpellBook::~SpellBook() {
	map<string, ASpell*>::iterator it;

	for (it = _spells.begin(); it != _spells.end(); it++) {
		delete it->second;
	}
	_spells.clear();
};

void	SpellBook::learnSpell(ASpell* spell) {
	ASpell* check = spell;
	if (!check)
		return;
	if (_spells.find(spell->getName()) == _spells.end())
		_spells.insert(pair<string, ASpell*>(spell->getName(), spell->clone()));
};

void	SpellBook::forgetSpell(string const& spellName) {
	if (_spells.find(spellName) != _spells.end()){
		delete _spells[spellName];
		_spells.erase(spellName);
	}
};

ASpell* SpellBook::createSpell(string const& spellName) {
	ASpell* newSpell = NULL;
	if (_spells.find(spellName) != _spells.end()) {
		newSpell = _spells[spellName];
	}
	return newSpell;

}
