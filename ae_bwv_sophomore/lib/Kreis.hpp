//
//  Rechteck.hpp
//  ae_bwv_sophomore
//
//  Created by Marco Dung on 04.10.17.
//
//

#ifndef Kreis_hpp
#define Kreis_hpp

class Kreis {
private:
	double radius;
public:
	double getRadius();
	void setRadius(double);
	double umfang();
	double flaeche();
};
#endif /* Kreis_hpp */
