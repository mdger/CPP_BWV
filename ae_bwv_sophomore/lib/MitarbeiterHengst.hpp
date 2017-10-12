//
//  MitarbeiterHengst.hpp
//  ae_bwv_sophomore
//
//  Created by Marco Dung on 12.10.17.
//
//

#ifndef MitarbeiterHengst_hpp
#define MitarbeiterHengst_hpp

#include "Mitarbeiter.hpp"

class MitarbeiterHengst : public Mitarbeiter {
private:
	float gehalt;
protected:
	void setGehalt(float);
	void setId(long);
public:
	MitarbeiterHengst(string, long, float);
	float getGehalt();
	string toString();
};

#endif /* MitarbeiterHengst_hpp */
