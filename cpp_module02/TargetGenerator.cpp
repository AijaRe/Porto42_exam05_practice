#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}


TargetGenerator::~TargetGenerator() {
    map<string, ATarget*>::iterator it;
    for (it = _targets.begin(); it != _targets.end(); it++)
        delete it->second;
    _targets.clear();
}

TargetGenerator::TargetGenerator(TargetGenerator& copy){
    *this = copy;
}

TargetGenerator& TargetGenerator::operator=(TargetGenerator& src) {
    if (this != &src)
    {
        map<string, ATarget*>::iterator it;
        for (it = _targets.begin(); it != _targets.end(); it++)
            delete it->second;
        _targets.clear();
        map<string, ATarget*>::iterator it2;
        for (it2 = src._targets.begin(); it2 != src._targets.end(); it2++)
            _targets[it2->first] = it2->second->clone();
    }
    return *this;
}

void    TargetGenerator::learnTargetType(ATarget* target) {
    if (target) {
        if (_targets.find(target->getType()) == _targets.end())
            _targets[target->getType()] = target->clone();  
    }
}

void    TargetGenerator::forgetTargetType(const string& type) {
    if (_targets.find(type) != _targets.end()) {
        delete _targets[type];
        _targets.erase(type);
    }
}

ATarget*    TargetGenerator::createTarget(const string& type) {
    ATarget* newTarget = NULL;
    if (_targets.find(type) != _targets.end())
        newTarget = _targets[type];
    return newTarget;
}
