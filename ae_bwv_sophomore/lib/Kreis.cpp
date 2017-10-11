//
//  Rechteck.cpp
//  ae_bwv_sophomore
//
//  Created by Marco Dung on 04.10.17.
//
//

#include "Kreis.hpp"
#include <cmath>

Kreis::Kreis(double radius) {
	this->radius = radius;
}

double Kreis::getRadius() {
	return this->radius;
}

void Kreis::setRadius(double radius) {
	if (radius > 0.0) {
		this->radius = radius;
	}
}

double Kreis::umfang() {
	return 2 * this->radius * M_PI;
}

double Kreis::flaeche() {
	return (M_PI *  exp2(this->radius));
}
