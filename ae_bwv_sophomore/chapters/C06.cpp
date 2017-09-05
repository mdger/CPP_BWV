//
//  C06.cpp
//  ae_bwv_sophomore
//
//  Created by Marco Dung on 31.08.17.
//
//

#include "C06.hpp"
#include <iostream>
#include <string>
#include <sstream>
#include <cmath>

using std::string;
using std::cout;
using std::endl;

/**
 Aufgabe 1, tauscht str1 mit str2

 @param str1 string
 @param str2 string
 */

void stringTauschen(string & str1, string & str2) {
	string tmp = str1;
	str1 = str2;
	str2 = tmp;
	cout << str1 << str2 << endl;
}

/**
 Teilt ein double auf in vor- und nachkomma.

 @param num double
 @param vorkomma string
 @param nachkomma string
 */

void zahlSplitten(double num, string & vorkomma, string & nachkomma) {
	cout << num << endl;
	string tmp;
	std::stringstream ss;
	long index = -1;

	ss << num;
	tmp = ss.str();
	index = tmp.find('.');

	if (index != -1) {
		vorkomma = tmp.substr(0, index);
		nachkomma = tmp.substr(index+1, tmp.length()-1);
	} else {
		vorkomma = tmp;
	}

}

/**
 Implementierung einer "trim"-Funktion

 @param str string
 */

void stringOhneLeerzeichen(string & str) {
	string tmp;

	for (int i = 0; i < str.length(); i++) {
		if (str[i] != ' ') {
			tmp += str[i];
		}
	}
	str = tmp;
}

/**
 Berechnet x1 und x2 einer quadratischen Gleichung mithilfe der Mitternachts-Formel

 ax^2 + bx + c = 0

 @param a int
 @param b int
 @param c int
 */
void quadratischeGleichung(int a, int b, int c) {
	double xOne = std::pow(2*a,-1)*(-1*b+std::sqrt(std::pow(b,2)-4*a*c));
	double xTwo = std::pow(2*a,-1)*(-1*b-std::sqrt(std::pow(b,2)-4*a*c));

	cout << "x1 = " << xOne << " " << "x2 = " << xTwo << endl;
}

