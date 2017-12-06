//
//  Leihartikel.hpp
//  ae_bwv_sophomore
//
//  Created by Marco Dung on 03.12.17.
//
//

#ifndef Leihartikel_hpp
#define Leihartikel_hpp

#include "Artikel.hpp"
#include "Datum.hpp"

class Leihartikel : Artikel{
	float leihgebuehr;
	Datum * leihdatum;

public:
	Leihartikel(long, std::string, float, Datum &);
	void setLeihgebuehr(float);
	void setLeihdatum(Datum &);
	Datum * getLeihdatum();
	float getLeihgebuehr();
};

#endif /* Leihartikel_hpp */
