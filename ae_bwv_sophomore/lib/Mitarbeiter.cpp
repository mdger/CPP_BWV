//
//  Mitarbeiter.cpp
//  ae_bwv_sophomore
//
//  Created by Marco Dung on 04.10.17.
//
//

#include "Mitarbeiter.hpp"
#include <sstream>
#include <cmath>

Mitarbeiter::Mitarbeiter(string name, long id) {
	this->name = name;
	this->id = std::abs(id);
}

Mitarbeiter::Mitarbeiter(Mitarbeiter & mitarbeiter) {
	this->name = mitarbeiter.getName();
	this->id = mitarbeiter.getId();
}

string Mitarbeiter::getName() {
	return this->name;
}

long Mitarbeiter::getId() {
	return this->id;
}

void Mitarbeiter::setName(string name) {
	this->name = name;
}

void Mitarbeiter::setId(long id) {
	this->id = std::abs(id);
}

string Mitarbeiter::toString() {
	std::stringstream ss;
	ss << "Personalnummer: " << this->id << " Name: " << this->name << std::endl;
	return ss.str();;
}
