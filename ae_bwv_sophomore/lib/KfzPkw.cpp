//
//  KfzPkw.cpp
//  ae_bwv_sophomore
//
//  Created by Marco Dung on 17.10.17.
//
//

#include "KfzPkw.hpp"
#include <iostream>

KfzPkw::KfzPkw(double tankinhaltMax, int sitzeMax, std::string fahrerName, std::string fahrzeugKlasse) : KfzPersonentransportfahrzeug(tankinhaltMax, sitzeMax), fahrerName(fahrerName), fahrzeugKlasse(fahrzeugKlasse) {
	setSitze(1);
}


std::string KfzPkw::getFahrzeugKlasse() {
	return fahrzeugKlasse;
}

std::string KfzPkw::getFahrerName() {
	return fahrerName;
}

void KfzPkw::einsteigen() {
	if (getSitze() + 1 <= getSitzeMax()) {
		setSitze(getSitze() + 1);
	} else {
		std::cout << "Fahrzeug ist voll. (" << getSitze() << ")"
		<< std::endl;
	}
}

void KfzPkw::aussteigen() {
	if (getSitze() == 1) {
		std::cout << "Alle bis auf den Fahrer ausgestiegen (der Fahrer darf nicht aussteigen)" << std::endl;
	} else {
		setSitze(getSitze() - 1);
	}
}

void KfzPkw::reisebereitMachen() {
	this->setTankinhalt(this->getTankinhaltMax());
}
