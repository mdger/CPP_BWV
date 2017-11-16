//
//  KfzLkw.hpp
//  ae_bwv_sophomore
//
//  Created by Marco Dung on 17.10.17.
//
//

#ifndef KfzLkw_hpp
#define KfzLkw_hpp

#include "Kfz.hpp"

class KfzLkw : public Kfz {
private:
	double ladeflaeche;
	double ladeflaecheMax;
public:
	KfzLkw(double tankinhaltMax, double ladeflaecheMax);

	double auslastung();
	void beladen(double flaeche);
	void entladen(double flaeche);
	void reisebereitMachen();
};

#endif /* KfzLkw_hpp */
