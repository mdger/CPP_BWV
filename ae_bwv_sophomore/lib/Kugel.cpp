//
//  Kugel.cpp
//  ae_bwv_sophomore
//
//  Created by Marco Dung on 04.10.17.
//
//

#include "Kugel.hpp"
#include <string>
#include <iostream>

Kugel::Kugel(double radius, double x, double y, double z) {
	this->radius = radius;
	this->position[0] = x;
	this->position[1] = y;
	this->position[2] = z;
}

double Kugel::getRadius() {
	return radius;
}

void Kugel::setRadius(double radius) {
	this->radius = radius;
}

void Kugel::setPosition(double x, double y, double z) {
	this->position[0] = x;
	this->position[1] = y;
	this->position[2] = z;
}

std::string Kugel::getMaterial() {
	return material;
}

void Kugel::setMaterial(std::string material) {
	this->material = material;
}

void Kugel::bewegen(double x, double y, double z) {
	position[0] += x;
	position[1] += y;
	position[2] += z;
	std::cout << position[0] << " " <<
	position[1] << " " <<
	position[2] << " " << std::endl;
}
