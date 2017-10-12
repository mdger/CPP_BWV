//
//  MitarbeiterManager.cpp
//  ae_bwv_sophomore
//
//  Created by Marco Dung on 12.10.17.
//
//

#include "MitarbeiterManager.hpp"
#include <sstream>

MitarbeiterManager::MitarbeiterManager(string name, long id, float gehalt, double bonusSatz) : MitarbeiterHengst(name, id, gehalt), bonusSatz(bonusSatz) {
	setId(id);
	setGehalt(gehalt);
}

void MitarbeiterManager::setId(long id) {
	id %= 10000;
	Mitarbeiter::setId(std::abs(50000 + id));
}

void MitarbeiterManager::setGehalt(float gehalt) {
	MitarbeiterHengst::setGehalt(bonusSatz * gehalt);
}

void MitarbeiterManager::setBonusSatz(double bonusSatz) {
	this->bonusSatz = bonusSatz;
}

double MitarbeiterManager::getBonusSatz() {
	return bonusSatz;
}
