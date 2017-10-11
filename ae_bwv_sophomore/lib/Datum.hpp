//
//  Datum.hpp
//  ae_bwv_sophomore
//
//  Created by Marco Dung on 04.10.17.
//
//

#ifndef Datum_hpp
#define Datum_hpp

#include <string>

class Datum {
private:
	int tag;
	int monat;
	int jahr;
public:
	Datum(int, int, int);
	Datum(Datum &);
	Datum(std::string);
	void setTag(int);
	void setMonat(int);
	void setJahr(int);
	int getTag();
	int getMonat();
	int getJahr();

	std::string datumFormatAusgabe();
	int inTage();
	void subtrahieren(int);
};
#endif /* Datum_hpp */
