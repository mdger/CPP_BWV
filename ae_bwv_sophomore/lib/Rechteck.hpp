//
//  Rechteck.hpp
//  ae_bwv_sophomore
//
//  Created by Marco Dung on 04.10.17.
//
//

#ifndef Rechteck_hpp
#define Rechteck_hpp

#include "ZweiDFigur.hpp"

class Rechteck : public ZweiDFigur {
private:
	double laenge;
	double breite;
public:
	Rechteck(double, double);
	double getBreite();
	void setBreite(double);
	double getLaenge();
	void setLaenge(double);
	double umfang();
	double flaeche();
};

#endif /* Rechteck_hpp */
