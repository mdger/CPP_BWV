//
//  Mitarbeiter.hpp
//  ae_bwv_sophomore
//
//  Created by Marco Dung on 04.10.17.
//
//

#ifndef Mitarbeiter_hpp
#define Mitarbeiter_hpp

#include <string>

using std::string;

class Mitarbeiter {

private:
	string name;
	long id;
public:
	string getName();
	void setName(string);
	long getId();
	void setId(long);
	string toString();
};
#endif /* Mitarbeiter_hpp */
