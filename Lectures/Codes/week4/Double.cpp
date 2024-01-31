#include "Double.h"
namespace sdds {
	Double::Double(double d_val)
	{
		val = d_val;
	}
	ostream& Double::print(ostream& ostr)
	{
		// TODO: insert return statement here
		ostr << "Value " << val << endl;
		return ostr;
	}
	istream& Double::read(istream& istr)
	{
		// TODO: insert return statement here
		istr >> val;
		return istr;
	}
	Double Double::operator+(Double& RO)
	{
		return Double(val + RO.val);
	}

	Double Double::operator+(double RO)
	{
		return Double(val + RO);
	}



	Double& Double::operator+=(Double& RO)
	{
		// TODO: insert return statement here
		val += RO.val;
		return *this;
	}
	Double Double::operator-()
	{
		return Double(-val);
	}
	Double::operator bool()
	{
		return val != 0.0;
	}
	double Double::getVal()
	{
		return val;
	}
	Double operator+(double LO, Double& RO)
	{
		return RO + LO; // optimized call
		// return Double(LO+RO.getVal());
	}
}
