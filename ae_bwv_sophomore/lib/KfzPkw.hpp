//
//  KfzPkw.hpp
//  ae_bwv_sophomore
//
//  Created by Marco Dung on 17.10.17.
//
//

#ifndef KfzPkw_hpp
#define KfzPkw_hpp

#include "KfzPersonentransportfahrzeug.hpp"
#include <string>

class KfzPkw : public  KfzPersonentransportfahrzeug {
private:
	std::string fahrzeugKlasse;
	std::string fahrerName;
public:
	KfzPkw(double tankinhaltMax, int sitzeMax, std::string fahrerName, std::string fahrzeugKlasse);
	std::string getFahrzeugKlasse();
	std::string getFahrerName();

	void einsteigen();
	void aussteigen();
	void reisebereitMachen();
};

#endif /* KfzPkw_hpp */
