//
//  Kfz.cpp
//  ae_bwv_sophomore
//
//  Created by Marco Dung on 04.10.17.
//
//

#include "Kfz.hpp"
#include <iostream>

double Kfz::getPreis() {
	return this->preis;
}
void Kfz::setPreis(double preis) {
	if (preis > 0.0) {
		this->preis = preis;
	}
}

void Kfz::auftanken(double liter) {
	// Maximale Tankfüllung ist 50l
	if (liter + this->tankinhalt <= 50.0) {
		this->tankinhalt += liter;
	} else {
		this->tankinhalt = 50.0;
		std::cout << "Überschüssige Tankfüllung verworfen. Der Tank ist voll!" << std::endl;
	}
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
