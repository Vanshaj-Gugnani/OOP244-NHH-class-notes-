#ifndef SENECA_SUPERHERO_H__
#define SENECA_SUPERHERO_H__
namespace seneca {
	class SuperHero
	{
	private:
		char* name;
		char* power;
		int age;
		int powerLevel;
		void strcpy_nhh(char* dest, const char* src);
	public:
		//SuperHero(); // constructor
		//SuperHero(const char*); // overloaded constructor

		// constructor with default arguments
		SuperHero(const char* heroName = "UNKNOWN", const char* heroPower = "UNKNOWN", int heroAge =0, int heroPowerLevel = 0);
		
		// Destructor
		~SuperHero();
		void display();
	};
}
#endif

