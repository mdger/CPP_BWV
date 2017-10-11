//
//  lib.cpp
//  ae_bwv_sophomore
//
//  Created by Marco Dung on 08.09.17.
//
//

#include "lib.hpp"
#include <iostream>

using std::cout;
using std::endl;

void displayArray(int arr[], int len) {
	for (int i = 0; i < len; i++) {
		cout << i << ":" << arr[i];
		if ((i+1) != len) {
			cout << ", ";
		}
	}

	cout << "" << endl;
}
