#pragma once
#include <iostream>
#include "ATarget.hpp"
using namespace std;

class Dummy : public ATarget{
    public:
        ~Dummy();
        Dummy();
       
        Dummy*              clone() const;
        
    private:
        std::string _type;
};

