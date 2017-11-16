//
//  Dreieck.cpp
//  ae_bwv_sophomore
//
//  Created by Marco Dung on 11.10.17.
//
//

#include "Dreieck.hpp"
#include <cmath>

Dreieck::Dreieck() {
	a = 1.0;
	b = 1.0;
	c = 1.0;
}

Dreieck::Dreieck(double a, double b, double c):a(a),b(b),c(c) {

	if (!isConstructable()) {
		a = 1.0;
		b = 1.0;
		c = 1.0;
	}
}

bool Dreieck::isConstructable() {
	bool isConstructable =
		((a+b) > c) ||
		((c+b) > a) ||
		((a+c) > b);
	return isConstructable;
}

void Dreieck::setA(double a) {
	double tmp = this->a;
	this->a = a;

	if (!isConstructable()) {
		this->a = tmp;
	}
}

void Dreieck::setB(double b) {
	double tmp = this->b;
	this->b = b;

	if (!isConstructable()) {
		this->b = tmp;
	}
}

void Dreieck::setC(double c) {
	double tmp = this->c;
	this->c = c;

	if (!isConstructable()) {
		this->c = tmp;
	}
}

double Dreieck::getA() {
	return a;
}

double Dreieck::getB() {
	return b;
}

double Dreieck::getC() {
	return c;
}

double Dreieck::flaeche() {
	double s = ((a+b+c)/2);
	return std::sqrt(s*(s-a)*(s-b)*(s-c));
}

double Dreieck::umfang() {
	return a + b +c;
}
