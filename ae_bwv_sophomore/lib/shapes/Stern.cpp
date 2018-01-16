//
//  Stern.cpp
//  ae_bwv_sophomore
//
//  Created by Marco Dung on 05.12.17.
//
//

#include "Stern.hpp"
#include "NEck.hpp"
#include "Dreieck.hpp"

Stern::~Stern() {

}

Stern::Stern(int zacken, double zackeBreite, double zackeSeitenlaenge) {
	std::shared_ptr<ZweiDFigur> pNEck = std::make_shared<NEck>(zackeBreite, zacken);
	std::shared_ptr<ZweiDFigur> pDreieck = std::make_shared<Dreieck>(zackeBreite, zackeSeitenlaenge, zackeSeitenlaenge);

	addTeilfigur(pNEck);
	
	for (int i = 0; i < zacken; i++) {
		addTeilfigur(pDreieck);
	}
}

/**
 Der Umfang des Sterns besteht nur aus den Seitenscheiteln der Dreiecke.

 @return Gesamtumfang
 */

double Stern::umfang() {
	double tmpUmfang = 0.0;

	// Summe der Dreiecke
	for (int i = 1; i < getTeilfiguren().size(); i++) {
		tmpUmfang += getTeilfigur(i)->umfang();
	}

	// Ziehe das NEck ab
	tmpUmfang -=  getTeilfigur(0)->umfang();
	return tmpUmfang;
}
