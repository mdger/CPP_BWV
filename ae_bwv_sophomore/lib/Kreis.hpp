//
//  Rechteck.hpp
//  ae_bwv_sophomore
//
//  Created by Marco Dung on 04.10.17.
//
//

#ifndef Kreis_hpp
#define Kreis_hpp

#include "ZweiDFigur.hpp"

class Kreis : public ZweiDFigur {
private:
	double radius;
public:
	Kreis(double);
	double getRadius();
	void setRadius(double);
	double umfang();
	double flaeche();
};
#endif /* Kreis_hpp */
