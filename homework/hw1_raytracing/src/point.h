#define _POINT

#include <iostream>
//#include <iostream.h>

using namespace std;


class Point{
	float X;
	float Y;
	float Z;
public:
    Point() {X = 0.0; Y = 0.0; Z = 0.0;}
    Point(float _X = 0.0,float _Y = 0.0,float _Z = 0.0):X(_X), Y(_Y), Z(_Z) {}	//constructor
//	Point(float,float,float); 		//constructor

	
	Point(const Point&);	  		//initialisation from another point
	Point& operator=(const Point&); 	//assignment
    Point& operator-(Point& p){
        Point subt(x()-p.x(), y()-p.y(), z()-p.z());
        return subt;
    }
	
	float& x() {return X;}
	float& y() {return Y;}
	float& z() {return Z;}
	
	
    friend ostream& operator<<(ostream&,Point);  //writing - for cout convinence
    friend istream& operator>>(istream&,Point&); //reading
};
