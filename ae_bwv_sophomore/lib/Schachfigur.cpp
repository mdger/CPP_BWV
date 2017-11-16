//
//  Schachfigur.cpp
//  ae_bwv_sophomore
//
//  Created by Marco Dung on 19.10.17.
//
//

#include "Schachfigur.hpp"
#include <iostream>

Schachfigur::Schachfigur(int x, int y, char farbe) {
	this->setPosition(x, y);
	this->farbe = farbe;
}

void Schachfigur::setPosition(int x, int y) {
	this->posX = x;
	this->posY = y;
}

bool Schachfigur::isValidPosition(int x, int y) {
	bool isXValid = (0 >= x && x <= 7);
	bool isYValid = (0 >= y && y <= 7);
	return isXValid && isYValid;
}

unsigned int Schachfigur::getPosX() {
	return posX;
}

unsigned int Schachfigur::getPosY() {
	return posY;
}

char Schachfigur::getFarbe() {
	return farbe;
}

void Schachfigur::setFarbe(char farbe) {
	if (farbe == 'w' || farbe == 's' ) {
		this->farbe = farbe;
	} else {
		std::cout << "Farbe der Figur ist weder schwarz noch weiß" << std::endl;
	}
}
