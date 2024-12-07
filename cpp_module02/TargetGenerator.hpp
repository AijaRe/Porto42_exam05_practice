#pragma once
#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"

using namespace std;

class ATarget;

class TargetGenerator {
	public:
		TargetGenerator();
		~TargetGenerator();

		void	learnTargetType(ATarget* target);
		void	forgetTargetType(const string& type);
		ATarget*	createTarget(const string& type);
	private:
		TargetGenerator(TargetGenerator& copy);
		TargetGenerator& operator=(TargetGenerator& src);
		
		std::map <std::string, ATarget*> _targets;
};
