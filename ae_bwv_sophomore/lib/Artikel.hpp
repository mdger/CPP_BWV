//
//  Artikel.hpp
//  ae_bwv_sophomore
//
//  Created by Marco Dung on 03.12.17.
//
//

#ifndef Artikel_hpp
#define Artikel_hpp

#include <string>

class Artikel {
	long nr;
	std::string name;

public:
	Artikel(long nr, std::string name);
	void setNr(long);
	void setName(std::string);
	long getNr();
	std::string getName();
};

#endif /* Artikel_hpp */
