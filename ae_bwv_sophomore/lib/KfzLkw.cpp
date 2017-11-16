//
//  KfzLkw.cpp
//  ae_bwv_sophomore
//
//  Created by Marco Dung on 17.10.17.
//
//

#include "KfzLkw.hpp"
#include <iostream>

KfzLkw::KfzLkw(double tankinhaltMax, double ladeflaecheMax) : Kfz(tankinhaltMax), ladeflaecheMax(ladeflaecheMax), ladeflaeche(0.0) {}

double KfzLkw::auslastung() {
	return ladeflaeche / ladeflaecheMax;
}

void KfzLkw::beladen(double flaeche) {
	if (this->ladeflaeche + flaeche >= ladeflaecheMax) {
		std::cout << "Ladefläche ist voll" << std::endl;
	} else {
		this->ladeflaeche += flaeche;
	}
}

void KfzLkw::entladen(double flaeche) {
	if (this->ladeflaeche - flaeche <= 0.0) {
		std::cout << "Ladefläche ist leer" << std::endl;
	} else {
		this->ladeflaeche -= flaeche;
	}
}

void KfzLkw::reisebereitMachen() {
	// mindestens 95% befüllen
	double max = getTankinhaltMax();
	double inhalt = getTankinhalt();
	double threshold = inhalt + (max * 0.95);

	if (threshold > max) {
		setTankinhalt(max);
	} else {
		setTankinhalt(threshold);
	}
}
