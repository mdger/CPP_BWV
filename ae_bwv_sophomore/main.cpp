//
//  main.cpp
//  ae_bwv_sophomore
//
//  Created by Marco Dung on 31.08.17.
//
//
#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
#include <memory>
#include <cmath>

#include "chapters/lib.hpp"
#include "chapters/C06.hpp"
#include "chapters/C07.hpp"
#include "chapters/C08.hpp"
#include "chapters/C09.hpp"
#include "Mitarbeiter.hpp"
#include "MitarbeiterMalocher.hpp"
#include "MitarbeiterHengst.hpp"
#include "MitarbeiterManager.hpp"
#include "Kfz.hpp"
#include "KfzPersonentransportfahrzeug.hpp"
#include "KfzBus.hpp"
#include "KfzPkw.hpp"
#include "KfzLkw.hpp"
#include "lib/Datum.hpp"
#include "lib/DynArray.hpp"
#include "ZweiDFigur.hpp"
#include "Kreis.hpp"
#include "Kugel.hpp"
#include "Rechteck.hpp"
#include "Dreieck.hpp"
#include "NEck.hpp"
#include "Schachbrett.hpp"
#include "Leihartikel.hpp"
#include "Stern.hpp"

//using namespace std;
using std::cout;
using std::endl;

int main(int argc, const char * argv[]) {
	/*
	std::shared_ptr<Datum> datum = std::make_shared<Datum>(20, 10, 2009);
	std::shared_ptr<Leihartikel> leihartikel = std::make_shared<Leihartikel>(999, "Yuppi", 12.25, *datum);

	cout << leihartikel->getLeihgebuehr() << endl;
	Datum * leihdatum = leihartikel->getLeihdatum();
	cout << leihdatum->getTag() << endl;
	cout << leihartikel->getLeihdatum()->getJahr() << endl;

	std::shared_ptr<Datum> datu2m = std::make_shared<Datum>(10, 12, 2017);
	leihartikel->setLeihdatum(*datu2m);

	cout << leihartikel->getLeihdatum()->getJahr() << endl;
	 */


	std::shared_ptr<Figur> figur = std::make_shared<Stern>(5, 1.0, 1.0);
	cout << figur->umfang() << endl;
	cout << figur->flaeche() << endl;

	return 0;
}
