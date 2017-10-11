//
//  DynArray.hpp
//  ae_bwv_sophomore
//
//  Created by Marco Dung on 05.10.17.
//
//

#ifndef DynArray_hpp
#define DynArray_hpp

#include <memory>

class DynArray {
private:
	int *dynArr;
	int *tmpArr;
	int length = 0;
public:
	void insert(int index, int value);
	void remove(int index);
	void displayArray();
};

#endif /* DynArray_hpp */
