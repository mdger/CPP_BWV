//
//  Rechteck.cpp
//  ae_bwv_sophomore
//
//  Created by Marco Dung on 04.10.17.
//
//

#include "Rechteck.hpp"

double Rechteck::getBreite() {
	return this->breite;
}

void Rechteck::setBreite(double breite) {
	if (breite > 0.0) {
		this->breite = breite;
	}
}

double Rechteck::getLaenge() {
	return this->laenge;
}

void Rechteck::setLaenge(double laenge) {
	if (laenge > 0.0) {
		this->laenge = laenge;
	}
}

double Rechteck::umfang() {
	return 2 * this->laenge + 2 * this->breite;
}

double Rechteck::flaeche() {
	return laenge * breite;
}
