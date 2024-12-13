#pragma once

#include <iostream>
#include "ATarget.hpp"
using namespace std;


class BrickWall : public ATarget {
	public:

		~BrickWall();
		BrickWall();

		ATarget*	clone() const;

};
