//
//  SchachfigurSpringer.hpp
//  ae_bwv_sophomore
//
//  Created by Marco Dung on 19.10.17.
//
//

#ifndef SchachfigurSpringer_hpp
#define SchachfigurSpringer_hpp

#include "Schachfigur.hpp"

class SchachfigurSpringer : public Schachfigur{
protected:
	void bewegen(int x, int y);
	bool isValidPosition(int x, int y);
public:
	SchachfigurSpringer(int x, int y, char farbe);
};

#endif /* SchachfigurSpringer_hpp */
