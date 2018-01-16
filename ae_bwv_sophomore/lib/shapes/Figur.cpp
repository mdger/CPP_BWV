//
//  Figur.cpp
//  ae_bwv_sophomore
//
//  Created by Marco Dung on 05.12.17.
//
//

#include "Figur.hpp"
#include <iostream>

Figur::~Figur() {
    
}

void Figur::addTeilfigur(std::shared_ptr<ZweiDFigur> teilfigur) {
	teilfiguren.push_back(teilfigur);
}

std::shared_ptr<ZweiDFigur> Figur::getTeilfigur(int index) {
	return teilfiguren[index];
}

/**
 Summe der Fläche aller Teilfiguren.

 @return Die Gesamtfläche
 */

double Figur::flaeche() {
	double gesamtflaeche = 0.0;

	for(std::shared_ptr<ZweiDFigur> teilfigur : teilfiguren) {
		gesamtflaeche += teilfigur->flaeche();
	}

	return gesamtflaeche;
}

/**
 Summe der Umfang aller Teilfiguren.
 Das kann mitunter nicht stimmen, weil die Figuren auch zusammengesetzt
 sein können und die "Ränder" einer Figur miteinbezogen werden.

 Es wird ermutigt, die Methode zu redifinieren.

 @return Der Gesamtumfang
 */

double Figur::umfang() {
	double gesamtUmfang = 0.0;

	for(std::shared_ptr<ZweiDFigur> teilfigur : teilfiguren) {
		gesamtUmfang += teilfigur->umfang();
	}

	return gesamtUmfang;
}

std::vector<std::shared_ptr<ZweiDFigur>> Figur::getTeilfiguren() {
	return teilfiguren;
}
