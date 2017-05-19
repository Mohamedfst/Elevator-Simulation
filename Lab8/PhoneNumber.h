
//Assignment 8A:PhoneNumber.h
//Programmer: Mohamed Keita
//Class: Comsc 200
//Editor used: Xcode

#ifndef PHONENUMBER_H
#define PHONENUMBER_H

//all required streams
#include <iostream>
using std::ostream;
using std::istream;

#include <string>
using std::string;

//creates the class 
class PhoneNumber
{
	friend ostream &operator<<(ostream&, const PhoneNumber &);
	friend istream &operator>>(istream &, PhoneNumber &);
private:
	string areaCode;
	string exchange;
	string line;
};

#endif