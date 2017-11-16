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
	double gehalt;
protected:
	void setGehalt(double);
	void setId(long);
public:
	MitarbeiterHengst(string, long, double);
	double einkommen();
	string toString();
};

#endif /* MitarbeiterHengst_hpp */
