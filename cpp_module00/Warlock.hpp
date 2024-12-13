#pragma once

#include <iostream>
using namespace std;

class Warlock {
	public:
		Warlock(string name, string title);
		~Warlock();

		const string& getName() const;
		const string& getTitle() const;
		void	setTitle(const string& title);
		void	introduce() const;


	private:
		Warlock();
		Warlock(Warlock& copy);
		Warlock& operator=(Warlock& src);

		string _name;
		string _title;
};
