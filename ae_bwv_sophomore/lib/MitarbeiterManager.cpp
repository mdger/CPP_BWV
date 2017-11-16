//
//  MitarbeiterManager.cpp
//  ae_bwv_sophomore
//
//  Created by Marco Dung on 12.10.17.
//
//

#include "MitarbeiterManager.hpp"
#include <sstream>

MitarbeiterManager::MitarbeiterManager(string name, long id, double gehalt, double bonusSatz) : MitarbeiterHengst(name, id, gehalt), bonusSatz(bonusSatz) {
	setId(id);
	setGehalt(gehalt);
}

void MitarbeiterManager::setId(long id) {
	id %= 100;
	Mitarbeiter::setId(std::abs(5000 + id));
}

void MitarbeiterManager::setGehalt(double gehalt) {
	MitarbeiterHengst::setGehalt(gehalt);
}

void MitarbeiterManager::setBonusSatz(double bonusSatz) {
	this->bonusSatz = bonusSatz;
}

double MitarbeiterManager::getBonusSatz() {
	return bonusSatz;
}

double MitarbeiterManager::einkommen() {
	return MitarbeiterHengst::einkommen() * bonusSatz;
}

string MitarbeiterManager::toString() {
	std::stringstream ss;
	ss << "Personalnummer: " << this->getId() << " Name: " <<
	this->getName() << " Einkommen: " << einkommen() <<
	" Bonus-Satz: " << getBonusSatz() << std::endl;
	return ss.str();;
}
