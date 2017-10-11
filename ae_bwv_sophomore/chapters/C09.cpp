//
//  C09.cpp
//  ae_bwv_sophomore
//
//  Created by Marco Dung on 20.09.17.
//
//

#include "C09.hpp"
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

void stringTauschenPointer(string * str1, string * str2) {
	string *tmp = str1;
	str1 = str2;
	str2 = tmp;
	const char *ptr_ch = str1->c_str();
	cout << *str1 << *str2 << endl;
	cout << *(++ptr_ch) << endl;

}


/**
 Teilt ein double auf in vor- und nachkomma.

 @param num double
 @param vorkomma string
 @param nachkomma string
 */

void zahlSplittenPointer(double num, string * vorkomma, string * nachkomma) {
	cout << num << endl;
	string tmp;
	std::stringstream ss;
	long index = -1;

	ss << num;
	tmp = ss.str();
	index = tmp.find('.');

	if (index != -1) {
		*vorkomma = tmp.substr(0, index);
		*nachkomma = tmp.substr(index+1, tmp.length()-1);
	} else {
		*vorkomma = tmp;
	}
}

/**
 Implementierung einer "trim"-Funktion

 @param str string
 */

void stringOhneLeerzeichenPointer(string * str) {
//	string tmp;
//	cout << *str << endl;
//
//	for (int i = 0; i < (*str).length(); i++, str++) {
//		cout << *str[i] << " ";
//		if (*str != ' ') {
//			tmp += *str;
//		}
//	}

}


void textArrays1(char charArray[]) {
	char * pArr = charArray;
	for (int i = '0'; i <= '9'; i++, pArr++) {
		*pArr = i;
	}

	// Nur Ausgabe
	for (int i = 0; i <= 9; i++) {
		cout << charArray[i];
	}
	cout << "\n";
}

void palindrom(char charArray[]) {
	// Überprüfe ob Palindrom
	// Ermitteln der Mitte, Division rundet auf, Bsp: 5/2 = 3
	char * pStart = charArray;
	char * pEnd = pStart;
	int laenge = 0;
	while(*pEnd != '\0') {
		pEnd++;
		laenge++;
	}

	pEnd--;
	laenge /= 2;
	if ((laenge % 2) == 1) {
		laenge *=22;
	}


	char * pStartPruef = pStart;
	char * pEndPruef = pEnd;

	for (int i = 0; i < laenge; i++, pStartPruef++, pEndPruef--) {
		if (*pStartPruef != *pEndPruef) {
			cout << "Kein Palindrom, Ermittle jetzt das Palindrom" << endl;
			break;
		}
	}

	// Ansonsten erstelle eins
	int laengeArr = laenge * 4 + 1;
	cout << "laengeArr " << laengeArr << endl;

	char resultArray[laengeArr];
	char * pResultArray = resultArray;

	for (int i = 0; i < (laengeArr/2); i++, pResultArray++, pStart++) {
		*pResultArray = *pStart;
	}
//	pStart++;

	for (int i = 0; i <= (laengeArr/2); i++, pResultArray++, pStart--) {
		*pResultArray = *pStart;
	}

	// Nur Ausgabe
	for (int i = 0; i < laengeArr; i++) {
		cout << resultArray[i];
	}
	cout << "\n";
}

/**
	Erstellen Sie dynamisch ein char-Array in Größe eines 
	 eingegebenen Namens. Schreiben Sie in das Array einen Chiffre Ihres Namens, indem Sie jeden Buchstaben um vier Positionen im Alphabet verschieben. (Die string-Klasse kennt ihre Größe.) C09_NamenChiffre

 @param str der String
 */

void namenChiffre(string str) {
	for (int i = 0; i < str.length(); i++) {
		if (islower(str.at(i))) {
			str.at(i) = (str.at(i) + 4 - 'a') % 26 + 'a';
		} else {
			str.at(i) = (str.at(i) + 4 - 'A') % 26 + 'A';
		}
	}

	cout << str << endl;

}
