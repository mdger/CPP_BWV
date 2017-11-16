//
//  KfzPersonentransportfahrzeug.hpp
//  ae_bwv_sophomore
//
//  Created by Marco Dung on 17.10.17.
//
//

#ifndef KfzPersonentransportfahrzeug_hpp
#define KfzPersonentransportfahrzeug_hpp

#include "Kfz.hpp"

class KfzPersonentransportfahrzeug : public Kfz {
private:
	unsigned int sitze;
	unsigned int sitzeMax;
protected:
	void setSitze(unsigned int sitze);
public:
	KfzPersonentransportfahrzeug(double tankinhaltMax, int sitzeMax);
	unsigned int getSitze();
	unsigned int getSitzeMax();

	virtual void einsteigen();
	void aussteigen();
	void reisebereitMachen();
	
	~KfzPersonentransportfahrzeug();
};

#endif /* KfzPersonentransportfahrzeug_hpp */
