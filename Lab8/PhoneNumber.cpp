//Assignment 8A:PhoneNumber.cpp
//Programmer: Mohamed Keita
//Class: Comsc 200
//Editor used: Xcode
#include <iomanip>
using std::setw;

#include "PhoneNumber.h"

//sets the ostream
ostream &operator<<( ostream &output, const PhoneNumber &number)
{
	output<< "(" <<number.areaCode <<")" <<number.exchange <<"-" <<number.line;
	return output;
}

//sets istream
istream &operator>>(istream &input, PhoneNumber &number)
{
	input.ignore();
	input >>setw(3) >>number.areaCode;
	input.ignore(2);
	input>>setw(3) >> number.exchange;
	input.ignore();
	input >> setw(4) >>number.line;
	return input;
}