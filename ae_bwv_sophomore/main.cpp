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
#include "lib/Dreieck.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
	shared_ptr<Dreieck> pDreieck = make_shared<Dreieck>(2.0, 3.0, 4.02);

	cout << pDreieck->flaeche() << endl;

	return 0;
}
