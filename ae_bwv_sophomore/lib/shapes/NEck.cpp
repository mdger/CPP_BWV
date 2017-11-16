//
//  NEck.cpp
//  ae_bwv_sophomore
//
//  Created by Marco Dung on 09.11.17.
//
//

#include "NEck.hpp"
#include <cmath>

NEck::NEck(double a, int seitenAnzahl)
: a(a), seitenAnzahl(seitenAnzahl) {}

double NEck::umfang() {
	return a * seitenAnzahl;
}

double NEck::flaeche() {
	// berechne Apothema aka. Inkreisradius
	double apothema = a/(2*std::tan(M_PI/seitenAnzahl));
	// Apothema * a / 2 * seitenzahl;
	return apothema*a/2*seitenAnzahl;
}
