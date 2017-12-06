//
//  Artikel.cpp
//  ae_bwv_sophomore
//
//  Created by Marco Dung on 03.12.17.
//
//

#include "Artikel.hpp"

Artikel::Artikel(long nr, std::string name) : nr(nr), name(name) {}

void Artikel::setNr(long nr) {
	this->nr = nr;
}

void Artikel::setName(std::string name) {
	this->name = name;
}

long Artikel::getNr() {
	return nr;
}

std::string Artikel::getName() {
	return name;
}
