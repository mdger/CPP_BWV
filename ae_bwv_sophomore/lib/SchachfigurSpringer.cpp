//
//  SchachfigurSpringer.cpp
//  ae_bwv_sophomore
//
//  Created by Marco Dung on 19.10.17.
//
//

#include "SchachfigurSpringer.hpp"
#include <iostream>

SchachfigurSpringer::SchachfigurSpringer(int x, int y, char farbe) : Schachfigur(x, y, farbe) {}

void SchachfigurSpringer::bewegen(int x, int y) {
	if (!isValidPosition(x, y)) {
		std::cout << "keine gültige Zielposition" << std::endl;
		return;
	}

	setPosition(x, y);
}

bool SchachfigurSpringer::isValidPosition(int x, int y) {
	bool isOnChessBoard = Schachfigur::isValidPosition(x, y);
	bool isValidPosition = true;

	return isOnChessBoard && isValidPosition;
}
