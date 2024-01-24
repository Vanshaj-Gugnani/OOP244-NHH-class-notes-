#include <iostream>
#include<cstring>
using namespace std;

#include "SuperHero.h"
namespace seneca {
	// Utility function for strcpy
	void SuperHero::strcpy_nhh(char* dest, const char* src)
	{
		
		while (*src != '\0') {
			*dest = *src;
			++dest;
			++src;
		}
		*dest = '\0';
	}
	/*SuperHero::SuperHero()
	{
		cout << "CONS1 called " << endl;
		name = new char[10];
		strcpy_nhh(name, "UNKNOWN");

		power = new char[10];
		strcpy_nhh(power, "UNKNOWN");

		age = 0;
		powerLevel = 0;
		// You cannot call a constructor, from ANYWHERE
		// So the following "Call" is not valid.
		// SuperHero("UNKNOWN", "UNKNOWN", 0, 0);
	}
	SuperHero::SuperHero(const char* heroName)
	{
		cout << "CONS2 called " << endl;
		name = new char[strlen(heroName) + 1];
		strcpy_nhh(name, heroName);

		power = new char[10];
		strcpy_nhh(power, "UNKNOWN");

		age = 0;
		powerLevel = 0;

	}*/

	// If we keep the following all inclusive constructor, we do not need to 
	// keep the above two constructors.
	SuperHero::SuperHero(const char* heroName, const char* heroPower, int heroAge, int heroPowerLevel)
	{
		cout << "CONS3 called" << endl;
		name = new char[strlen(heroName) + 1];
		strcpy_nhh(name, heroName);

		power = new char[strlen(heroPower) + 1];
		strcpy_nhh(power, heroPower);

		age = heroAge;
		powerLevel = heroPowerLevel;

	}

	//destructor
	SuperHero::~SuperHero()
	{
		cout << "DEST Called " << name << endl;
		delete[] name;
		delete[] power;
	}


	void SuperHero::display()
	{
		cout << name << "," << power << "," << age << "," << powerLevel << endl;
	}
}
