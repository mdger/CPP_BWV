//
//  main.cpp
//  ae_bwv_sophomore
//
//  Created by Marco Dung on 31.08.17.
//
//

#include "chapters/C06.hpp"
#include <iostream>
#include <string>
#include <iomanip>

using std::string;

int main(int argc, const char * argv[]) {
	string str1 = "Ich mag Kekse... ";
	stringOhneLeerzeichen(str1);
	std::cout << str1 << std::endl;

	quadratischeGleichung(2, 10, 12);

	return 0;
}
