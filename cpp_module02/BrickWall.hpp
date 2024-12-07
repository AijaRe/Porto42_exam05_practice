#pragma once
#include <iostream>
#include "ATarget.hpp"
using namespace std;

class BrickWall : public ATarget{
    public:
        ~BrickWall();
        BrickWall();
       
        BrickWall*              clone() const;
        
    private:
        std::string _type;
};

