//
//  KfzBus.cpp
//  ae_bwv_sophomore
//
//  Created by Marco Dung on 17.10.17.
//
//

#include "KfzBus.hpp"
#include <iostream>

KfzBus::KfzBus(double tankinhaltMax, int sitzeMax, std::string fahrerName) : KfzPersonentransportfahrzeug(tankinhaltMax, sitzeMax), fahrerName(fahrerName) {}

std::string KfzBus::getFahrerName() {
	return fahrerName;
}

void KfzBus::einsteigen() {
	if (getSitze() + 1 <= getSitzeMax()) {
		setSitze(getSitze() + 1);
	} else {
		std::cout << "Fahrzeug ist voll. (" << getSitze() << ")"
		<< std::endl;
	}
}

void KfzBus::reisebereitMachen() {
	//	 mindestens 50% befüllen
	double max = getTankinhaltMax();
	double inhalt = getTankinhalt();
	double threshold = inhalt + (max * 0.50);

	if (threshold > max) {
		setTankinhalt(max);
	} else {
		setTankinhalt(threshold);
	}
}
