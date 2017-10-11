//
//  DynArray.cpp
//  ae_bwv_sophomore
//
//  Created by Marco Dung on 05.10.17.
//
//

#include "DynArray.hpp"
#include <iostream>

/**
 Inserts value at index i

 @param index <#index description#>
 @param value <#value description#>
 */

void DynArray::insert(int index, int value) {
	length++;
	tmpArr = new int[length];
	// Zahlen kopieren
	std::memcpy(tmpArr, dynArr, length * sizeof(int));
	// und Vorgänger freigeben
	delete [] dynArr;
	dynArr = tmpArr;
}

/**
 Removes a value at index i

 @param index <#index description#>
 */

void DynArray::remove(int index) {

}

/**
 Displays all array values with their respective indices
 */

void DynArray::displayArray() {
	for (int i = 0; i < length; i++) {
		std::cout << "[" << i << "] " << " ";
	}

	std::cout << std::endl;
}
