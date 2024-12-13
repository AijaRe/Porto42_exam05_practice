#pragma once

#include <iostream>
#include <map>
#include "ATarget.hpp"
using namespace std;

class TargetGenerator {
	public:
		TargetGenerator();
		~TargetGenerator();

		void	learnTargetType(ATarget* Target);
		void	forgetTargetType(string const& targetType);
		ATarget* createTarget(string const& targetType);


	private:

		TargetGenerator(TargetGenerator& copy);
		TargetGenerator& operator=(TargetGenerator& src);

		map<string, ATarget*> _targets;
};
