//
//  Schachfigur.hpp
//  ae_bwv_sophomore
//
//  Created by Marco Dung on 19.10.17.
//
//

#ifndef Schachfigur_hpp
#define Schachfigur_hpp

class Schachfigur {
private:
	unsigned int posX;
	unsigned int posY;
	char farbe;
protected:
	void setPosition(int x, int y);
	bool isValidPosition(int x, int y);
public:
	Schachfigur(int x, int y, char farbe);
	unsigned int getPosX();
	unsigned int getPosY();
	char getFarbe();
	void setFarbe(char farbe);
};

#endif /* Schachfigur_hpp */
