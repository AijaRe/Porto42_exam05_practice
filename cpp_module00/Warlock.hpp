#include <iostream>
using namespace std;

class Warlock {
    public:
        Warlock(std::string name, std::string title);
        ~Warlock();

        const std::string&  getName() const;
        const std::string&  getTitle() const;
        void                setTitle(const std::string& title);
        void                introduce() const;
    private:
        Warlock();
        Warlock(Warlock& copy);
        Warlock& operator=(Warlock& src);
        std::string _name;
        std::string _title;
};
