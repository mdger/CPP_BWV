//
//  Leihartikel.cpp
//  ae_bwv_sophomore
//
//  Created by Marco Dung on 03.12.17.
//
//

#include "Leihartikel.hpp"

Leihartikel::Leihartikel(long nr, std::string name, float leihgebuehr, Datum & datum) : Artikel(nr, name), leihgebuehr(leihgebuehr), leihdatum(&datum) { }

void Leihartikel::setLeihgebuehr(float leihgebuehr) {
	this->leihgebuehr = leihgebuehr;
}

void Leihartikel::setLeihdatum(Datum & datum) {
	* leihdatum = datum;
}

Datum * Leihartikel::getLeihdatum() {
	return leihdatum;
}

float Leihartikel::getLeihgebuehr() {
	return leihgebuehr;
}
