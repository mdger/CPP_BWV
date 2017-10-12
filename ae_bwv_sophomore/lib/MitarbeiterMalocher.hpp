//
//  MitarbeiterMalocher.hpp
//  ae_bwv_sophomore
//
//  Created by Marco Dung on 12.10.17.
//
//

#ifndef MitarbeiterMalocher_hpp
#define MitarbeiterMalocher_hpp

#include "Mitarbeiter.hpp"

class MitarbeiterMalocher : public Mitarbeiter {
private:
	double stundenSatz;
	int anzahlStunden;
protected:
	void setId(long);
public:
	MitarbeiterMalocher(string, long, double, int);

	void setStundenSatz(double);
	void setAnzahlStunden(int);
	double getStundenSatz();
	int getAnzahlStunden();

	double einkommen();
	string toString();
};

#endif /* MitarbeiterMalocher_hpp */
