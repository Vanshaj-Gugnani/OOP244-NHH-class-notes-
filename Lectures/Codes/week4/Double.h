#include<iostream>
using namespace std;
#ifndef SDDS_DOUBLE_H__
#define SDDS_DOUBLE_H__
namespace sdds {
	class Double
	{
	private:
		double val;
	public:
		// constructor
		Double(double d_val = 0.0);
		// member functions
		ostream& print(ostream& ostr = cout);
		istream& read(istream& istr = cin);

		// plus operator
		Double operator+(Double& RO);
		Double operator+(double RO);

		// plus_eq operator
		Double& operator+=(Double& RO);

		// unary -
		Double operator-();

		// bool operator
		operator bool();
		// getter
		double getVal();


	};

	// helper operator plus
	Double operator+ (double LO, Double& RO);
}
#endif

