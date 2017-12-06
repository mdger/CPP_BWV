//
//  Figur.cpp
//  ae_bwv_sophomore
//
//  Created by Marco Dung on 05.12.17.
//
//

#include "Figur.hpp"
#include <iostream>

Figur::~Figur() {
    
}

void Figur::addTeilfigur(ZweiDFigur * teilfigur) {
    
}

ZweiDFigur * Figur::getTeilfigur(int index) {
	return this->figur[0];
}

double Figur::flaeche() {
    return 0.0;
}

double Figur::umfang() {
    return 0.0;
}
