//
//  NEck.hpp
//  ae_bwv_sophomore
//
//  Created by Marco Dung on 09.11.17.
//
//

#ifndef NEck_hpp
#define NEck_hpp

#include "ZweiDFigur.hpp"

class NEck : public ZweiDFigur {
private:
	double a;
	int seitenAnzahl;
public:
	NEck(double, int);
	double umfang();
	double flaeche();
};

#endif /* NEck_hpp */
