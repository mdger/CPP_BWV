//
//  Dreieck.hpp
//  ae_bwv_sophomore
//
//  Created by Marco Dung on 11.10.17.
//
//

#ifndef Dreieck_hpp
#define Dreieck_hpp

class Dreieck {
private:
	double a;
	double b;
	double c;
	bool isConstructable();
public:
	Dreieck();
	Dreieck(double, double, double);
	void setA(double);
	void setB(double);
	void setC(double);
	double getA();
	double getB();
	double getC();
	double flaeche();

};

#endif /* Dreieck_hpp */
