#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {};

TargetGenerator::~TargetGenerator() {
	map<string, ATarget*>::iterator it;

	for (it = _targets.begin(); it != _targets.end(); it++) {
		delete it->second;
	}
	_targets.clear();
};

void	TargetGenerator::learnTargetType(ATarget* target) {
	ATarget* check = target;
	if (!check)
		return;
	if (_targets.find(target->getType()) == _targets.end())
		_targets.insert(pair<string, ATarget*>(target->getType(), target->clone()));
};

void	TargetGenerator::forgetTargetType(string const& targetType) {
	if (_targets.find(targetType) != _targets.end()){
		delete _targets[targetType];
		_targets.erase(targetType);
	}
};

ATarget* TargetGenerator::createTarget(string const& targetType) {
	ATarget* newTarget = NULL;
	if (_targets.find(targetType) != _targets.end()) {
		newTarget = _targets[targetType];
	}
	return newTarget;

}
