//
//  Kfz.cpp
//  ae_bwv_sophomore
//
//  Created by Marco Dung on 04.10.17.
//
//

#include "Kfz.hpp"
#include <iostream>

Kfz::Kfz(double tankinhaltMax) : geschwindigkeit(0), tankinhalt(0), tankinhaltMax(tankinhaltMax) {}

void Kfz::setTankinhalt(double liter) {
	this->tankinhalt = liter;
}

double Kfz::getTankinhaltMax() {
	return tankinhaltMax;
}

void Kfz::auftanken(double liter) {
	if (liter + this->tankinhalt <= tankinhaltMax) {
		this->tankinhalt += liter;
	} else {
		this->tankinhalt = tankinhaltMax;
		std::cout << "Überschüssige Tankfüllung verworfen. Der Tank ist voll! (" << tankinhaltMax<< ")"
		<< std::endl;
	}
}

double Kfz::getGeschwindigkeit() {
	return geschwindigkeit;
}

void Kfz::bremsen(double kmH) {
	if (this->geschwindigkeit - kmH <= 0.0) {
		this->geschwindigkeit = 0.0;
		std::cout << "Fahrzeug gestoppt." << std::endl;
	} else {
		this->geschwindigkeit -= kmH;
		std::cout << "Gebremst, momentane Geschwindigkeit ist " << this->geschwindigkeit << std::endl;
	}
}

void Kfz::beschleunigen(double kmH) {
	if (this->geschwindigkeit + kmH >= 200.0) {
		this->geschwindigkeit = 200.0;
		std::cout << "Sie fahren jetzt mit maximaler Geschwindigkeit (200 Km/h)" << std::endl;
	} else {
		this->geschwindigkeit += kmH;
		std::cout << "Beschleunigt, momentane Geschwindigkeit ist " << this->geschwindigkeit << std::endl;
	}
}

double Kfz::getTankinhalt() {
	return tankinhalt;
}

Kfz::~Kfz() {

}
