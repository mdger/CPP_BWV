//
//  C07.cpp
//  ae_bwv_sophomore
//
//  Created by Marco Dung on 06.09.17.
//
//

#include "C07.hpp"
#include "lib.hpp"

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <sstream>

using std::cout;
using std::endl;

void noten() {
	// Initialisiere Variablen
	std::srand(std::time(0));
	int noten[30] = {};
	int size = (sizeof(noten) / sizeof(*noten));
	int entscheidung;
	std::string userInput;

	// Eingabe von Noten;
	cout << "(1) Zufällig 30 Noten generieren oder (2) Manuell eingeben?" << endl;
	std::cin >> entscheidung;
	if (entscheidung == 1) {
		for (int i = 0; i < size; i++) {
			std::cout << "Note " << i+1 << std::endl;
 			std::cin >> noten[i];
		}
		cout << "Alle Noten eingetragen." << endl;
	} else if (entscheidung == 2) {
		// generiert zufällige Liste von Noten
		for (int i = 0; i < size; i++) {
			noten[i] = (std::rand() % 6)+1;
		}
		cout << "Notenliste generiert" << endl;
	}

	int index, note;
	// Ändern von einzelnen Noten
	while(userInput != "exit") {
		std::getline(std::cin, userInput);
		std::istringstream stream(userInput);
		stream >> index >> note;
		stream.str("");
		noten[index] = note;
		if (userInput != "exit") {
			displayNoten(noten, size);
		}
	}
}

/**
 Stellt Noten und Durchschnitt dar. Fragt auch noch

 @param noten <#noten description#>
 @param size <#size description#>
 */

void displayNoten(int noten[], int size) {
	int summe = 0;
	for (int i = 0; i < size; i++) {
		summe += noten[i];
	}
	displayArray(noten, size);
	double durchschnitt = (double) summe / size;
	cout << "Durchschnitt " << durchschnitt << endl;
	cout << "Welche Note möchten Sie ändern (Index + Note)? Wenn Sie die Eingabe beenden möchten, tippen Sie 'exit' ein \n" << endl;
}

