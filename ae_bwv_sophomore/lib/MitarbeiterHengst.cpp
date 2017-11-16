//
//  MitarbeiterHengst.cpp
//  ae_bwv_sophomore
//
//  Created by Marco Dung on 12.10.17.
//
//

#include "MitarbeiterHengst.hpp"
#include <cmath>
#include <sstream>

MitarbeiterHengst::MitarbeiterHengst(string name, long id, double gehalt):Mitarbeiter(name, id), gehalt(gehalt) {
	setName(name);
	setId(id);
}

void MitarbeiterHengst::setGehalt(double gehalt) {
	this->gehalt = gehalt;
}

double MitarbeiterHengst::einkommen() {
	return gehalt;
}

void MitarbeiterHengst::setId(long id) {
	id %= 1000;
	Mitarbeiter::setId(std::abs(5000 + id));
}

string MitarbeiterHengst::toString() {
	std::stringstream ss;
	ss << "Personalnummer: " << this->getId() << " Name: " <<
	this->getName() << " Gehalt: " << this->gehalt << std::endl;
	return ss.str();
}
