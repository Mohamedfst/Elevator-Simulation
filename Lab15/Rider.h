//Assignment 10B:Rider.h
//Programmer: Mohamed Keita
//Class: Comsc 200
//Editor used: Xcode

#ifndef Rider_H
#define Rider_H

class Floor;

//crates the class
class Rider
{
public:
 	Rider(const Floor& f):destination(&f), idNumber(nObjects) {++nObjects;}
	bool operator==(const Rider&) const;
	bool operator<(const Rider&) const;
	const Floor& getDestination() const{return *destination;}
	const Rider& operator =(const Rider&);
private:
	const int idNumber;
	static int nObjects;
	const Floor* const destination;
};
#endif