//
//  Kugel.hpp
//  ae_bwv_sophomore
//
//  Created by Marco Dung on 04.10.17.
//
//

#ifndef Kugel_hpp
#define Kugel_hpp

#include <string>

class Kugel {
private:
	double radius;
	std::string material;
	double position[3];

public:
	Kugel(double, double, double, double);
	double getRadius();
	void setRadius(double);
	void setPosition(double, double, double);
	std::string getMaterial();
	void setMaterial(std::string);
	void bewegen(double, double, double);
};

#endif /* Kugel_hpp */
