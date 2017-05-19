//Assignment 8B:Floor.h
//Programmer: Mohamed Keita
//Class: Comsc 200
//Editor used: Xcode
#ifndef Floor_h
#define Floor_h
class Floor{
public:
	Floor(const int floorLoc):floorLoc(floorLoc){}
	int getLocation() const{return floorLoc;} //gets the loc of the floor
private:
	const int floorLoc;

};

#endif