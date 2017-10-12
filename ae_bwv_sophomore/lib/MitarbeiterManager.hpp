//
//  MitarbeiterManager.hpp
//  ae_bwv_sophomore
//
//  Created by Marco Dung on 12.10.17.
//
//

#ifndef MitarbeiterManager_hpp
#define MitarbeiterManager_hpp

#include "MitarbeiterHengst.hpp"

class MitarbeiterManager : public MitarbeiterHengst {
private:
	double bonusSatz;
protected:
	void setId(long);
	void setGehalt(float);
public:
	MitarbeiterManager(string, long, float, double);

	void setBonusSatz(double);
	double getBonusSatz();
};

#endif /* MitarbeiterManager_hpp */
