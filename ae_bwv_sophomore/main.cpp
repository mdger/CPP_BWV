//
//  main.cpp
//  ae_bwv_sophomore
//
//  Created by Marco Dung on 31.08.17.
//
//

#include "chapters/lib.hpp"
#include "chapters/C06.hpp"
#include "chapters/C07.hpp"
#include "chapters/C08.hpp"
#include "chapters/C09.hpp"
#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
#include <memory>
#include "Mitarbeiter.hpp"
#include "lib/Kreis.hpp"
#include "lib/Rechteck.hpp"
#include "lib/Kfz.hpp"
#include "lib/Datum.hpp"
#include "lib/Kugel.hpp"
#include "lib/DynArray.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
//	namenChiffre("abcwABCW");
	shared_ptr<Mitarbeiter> pMitarbeiter = make_shared<Mitarbeiter>();
	pMitarbeiter->setId(17);
	pMitarbeiter->setName("Marco");

//	cout << pMitarbeiter->toString();

	shared_ptr<Kreis> pKreis = make_shared<Kreis>();
	pKreis->setRadius(4.0);
//	cout << pKreis->flaeche() << endl;
//	cout << pKreis->umfang() << endl;

	shared_ptr<Rechteck> pRechteck = make_shared<Rechteck>();
	pRechteck->setBreite(3.0);
	pRechteck->setLaenge(5.5);
//	cout << pRechteck->umfang() << endl;
//	cout << pRechteck->flaeche() << endl;

//	shared_ptr<Kfz> pKfz1 = make_shared<Kfz>();
//	pKfz1->auftanken(50.1);
//	pKfz1->beschleunigen(200.0);
//	pKfz1->bremsen(25.0);
//
//	shared_ptr<Kfz> pKfz2 = make_shared<Kfz>();
//	pKfz2->auftanken(49.0);
//	pKfz2->auftanken(1.0);

	shared_ptr<Datum> pDatum = make_shared<Datum>();
	pDatum->setTag(30);
	pDatum->setMonat(11);
	pDatum->setJahr(181);
//	cout << pDatum->datumFormatAusgabe() << endl;
//	cout << pDatum->inTage() << endl;
	pDatum->subtrahieren(731);
//	cout << pDatum->datumFormatAusgabe() << endl;

	shared_ptr<Kugel> pKugel = make_shared<Kugel>();
	pKugel->setPosition(1.0,1.0,1.0);
//	pKugel->bewegen(1.0, 2.0, 3.5);
//	pKugel->bewegen(-1.0, -2.0, -3.5);

	shared_ptr<DynArray> pDynArray = make_shared<DynArray>();

	pDynArray->displayArray();












	return 0;
}
