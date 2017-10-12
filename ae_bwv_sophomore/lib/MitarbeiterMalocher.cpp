//
//  MitarbeiterMalocher.cpp
//  ae_bwv_sophomore
//
//  Created by Marco Dung on 12.10.17.
//
//

#include "MitarbeiterMalocher.hpp"
#include <sstream>

MitarbeiterMalocher::MitarbeiterMalocher(string name, long id, double stundenSatz, int anzahlStunden) : Mitarbeiter(name, id), stundenSatz(stundenSatz), anzahlStunden(anzahlStunden) {
	setId(id);
}

void MitarbeiterMalocher::setId(long id) {
	id %= 1000;
	Mitarbeiter::setId(std::abs(3000 + id));
}


void MitarbeiterMalocher::setStundenSatz(double stundenSatz) {
	this->stundenSatz = stundenSatz;
}

void MitarbeiterMalocher::setAnzahlStunden(int anzahlStunden) {
	this->anzahlStunden = anzahlStunden;
}

double MitarbeiterMalocher::getStundenSatz() {
	return stundenSatz;
}

int MitarbeiterMalocher::getAnzahlStunden() {
	return anzahlStunden;
}

double MitarbeiterMalocher::einkommen() {
	return anzahlStunden * stundenSatz;
}

string MitarbeiterMalocher::toString() {
	std::stringstream ss;
	ss << "Personalnummer: " << this->getId() << " Name: " <<
	this->getName() << " Einkommen: " << einkommen() << std::endl;
	return ss.str();;
}
