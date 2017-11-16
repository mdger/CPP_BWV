//
//  KfzPersonentransportfahrzeug.cpp
//  ae_bwv_sophomore
//
//  Created by Marco Dung on 17.10.17.
//
//

#include "KfzPersonentransportfahrzeug.hpp"
#include <iostream>

KfzPersonentransportfahrzeug::KfzPersonentransportfahrzeug(double tankinhaltMax, int sitzeMax) : Kfz(tankinhaltMax), sitze(0), sitzeMax(sitzeMax) {}

unsigned int KfzPersonentransportfahrzeug::getSitze() {
	return sitze;
}

unsigned int KfzPersonentransportfahrzeug::getSitzeMax() {
	return sitzeMax;
}

void KfzPersonentransportfahrzeug::setSitze(unsigned int sitze) {
	this->sitze = sitze;
}

void KfzPersonentransportfahrzeug::einsteigen() {
	if (sitze >= sitzeMax) {
		std::cout << "Fahrzeug ist voll, aber es steigt noch einer ein. (" << sitze << ")"
		<< std::endl;
	}

	sitze ++;
}

void KfzPersonentransportfahrzeug::aussteigen() {
	if (sitze - 1 != 0) {
		sitze--;
	} else {
		std::cout << "Fahrzeug ist leer" << std::endl;
	}
}

void KfzPersonentransportfahrzeug::reisebereitMachen() {
	double tankinhaltMax = getTankinhaltMax();
	setTankinhalt(tankinhaltMax);
}

KfzPersonentransportfahrzeug::~KfzPersonentransportfahrzeug() {

}
