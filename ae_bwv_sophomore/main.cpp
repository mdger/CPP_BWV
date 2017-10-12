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
#include "MitarbeiterMalocher.hpp"
#include "MitarbeiterHengst.hpp"
#include "MitarbeiterManager.hpp"
#include "lib/Kreis.hpp"
#include "lib/Rechteck.hpp"
#include "lib/Kfz.hpp"
#include "lib/Datum.hpp"
#include "lib/Kugel.hpp"
#include "lib/DynArray.hpp"
#include "lib/Dreieck.hpp"

using namespace std;

int main(int argc, const char * argv[]) {

	shared_ptr<MitarbeiterMalocher> pMalocher = make_shared<MitarbeiterMalocher>("Malocher", 323, 8.95, 42);

	cout << pMalocher->toString() << endl;

	shared_ptr<MitarbeiterHengst> pHengst = make_shared<MitarbeiterHengst>("Hengst", 559, 2500.0);

	cout << pHengst->toString() << endl;

	shared_ptr<MitarbeiterManager> pManager = make_shared<MitarbeiterManager>("Manager", 363, 2500.0, 1.25);

	cout << pManager->toString() << endl;

	return 0;
}
