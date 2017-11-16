//
//  KfzBus.hpp
//  ae_bwv_sophomore
//
//  Created by Marco Dung on 17.10.17.
//
//

#ifndef KfzBus_hpp
#define KfzBus_hpp

#include "KfzPersonentransportfahrzeug.hpp"
#include <string>

class KfzBus : public KfzPersonentransportfahrzeug {
private:
	std::string fahrerName;
public:
	KfzBus(double tankinhaltMax, int sitzeMax, std::string fahrerName);
	std::string getFahrerName();

	void einsteigen();
	void reisebereitMachen();
};

#endif /* KfzBus_hpp */
