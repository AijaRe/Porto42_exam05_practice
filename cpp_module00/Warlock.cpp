#include "Warlock.hpp"

Warlock::Warlock() : _name("noname"), _title("notitle") {}

Warlock::Warlock(std::string name, std::string title) : _name(name), _title(title) {
    cout << _name << ": This looks like another boring day." << endl;
}

Warlock::~Warlock() {
    cout << _name << ": My job here is done!" << endl;
}

Warlock::Warlock(Warlock& copy) : _name(copy._name), _title(copy._title) {}

Warlock& Warlock::operator=(Warlock& src) {
    if (this != &src)
    {
        _name = src._name;
        _title = src._title;
    }
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
