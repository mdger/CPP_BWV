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

using std::string;

void stringTauschen(string & str1, string & str2) {
	string tmp = str1;
	str1 = str2;
	str2 = tmp;
}
