//
//  Stern.hpp
//  ae_bwv_sophomore
//
//  Created by Marco Dung on 05.12.17.
//
//

#ifndef Stern_hpp
#define Stern_hpp

#include "Figur.hpp" 

class Stern : public Figur {
public:
	Stern(int zacken, double zackeBreite, double zackeSeitenlaenge);
	~Stern();
};

#endif /* Stern_hpp */
