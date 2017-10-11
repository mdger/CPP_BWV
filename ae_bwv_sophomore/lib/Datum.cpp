//
//  Datum.cpp
//  ae_bwv_sophomore
//
//  Created by Marco Dung on 04.10.17.
//
//

#include "Datum.hpp"
#include <sstream>
#include <iomanip>
#include <string>
#include <cmath>
#include <iostream>

using std::string;

Datum::Datum(int tag, int monat, int jahr) {
	this->tag = tag;
	this->monat = monat;
	this->jahr = jahr;
}

Datum::Datum(Datum & datum) {
	this->tag = datum.getTag();
	this->monat = datum.getMonat();
	this->jahr = datum.getJahr();
}

Datum::Datum(string datum) {
	std::istringstream iss(datum);
	string tmp;

	iss >> tmp;
	this->tag = std::stoi(tmp);
	iss >> tmp;
	this->monat = std::stoi(tmp);
	iss >> tmp;
	this->jahr = std::stoi(tmp);
}

void Datum::setTag(int tag) {
	if (tag > 0 && tag <= 30) {
		this->tag = tag;
	}
}

void Datum::setMonat(int monat) {
	if (monat > 0 && monat <= 12) {
		this->monat = monat;
	}
}

void Datum::setJahr(int jahr) {
	if (jahr > 0) {
		this->jahr = jahr;
	}
}

int Datum::getTag() {
	return tag;
}

int Datum::getMonat() {
	return monat;
}

int Datum::getJahr() {
	return jahr;
}

string Datum::datumFormatAusgabe() {
	std::stringstream ss;

	string monatsName;

	switch (monat) {
		case 1:
			monatsName = "JAN";
			break;
		case 2:
			monatsName = "FEB";
			break;
		case 3:
			monatsName = "MAR";
			break;
		case 4:
			monatsName = "APR";
			break;
		case 5:
			monatsName = "MAY";
			break;
		case 6:
			monatsName = "JUN";
			break;
		case 7:
			monatsName = "JUL";
			break;
		case 8:
			monatsName = "AUG";
			break;
		case 9:
			monatsName = "SEP";
			break;
		case 10:
			monatsName = "OCT";
			break;
		case 11:
			monatsName = "NOV";
			break;
		case 12:
			monatsName = "DEC";
			break;
		default:
			monatsName = "BRZRZ";
			break;

	}

	ss << tag << "." << monatsName << " " << std::setfill('0') << std::setw(4) << jahr;
	return ss.str();
}

/**
 ...das Datum in Tage beginnend am 1.1.0001 umwandelt (0. Jahr gibts nicht)...

 @return <#return value description#>
 */

int Datum::inTage() {
	return tag + monat * 30 + jahr * 365;
}

void Datum::subtrahieren(int tage) {
	while(tage > 0) {
		if (tage >= 365) {
			jahr--;
			tage -= 365;
		} else if (tage >= 30) {
			tage -= 30;
			if (monat == 1) {
				jahr--;
				monat = 12;
			} else {
				monat--;
			}
		} else {
			tag = std::abs(tag - tage);
			if (tage >= tag) {
				monat--;
			}
			// Duplizierter Code
			if (monat == 1) {
				jahr--;
				monat = 12;
			}
			tage = 0;
		}
	}
}
