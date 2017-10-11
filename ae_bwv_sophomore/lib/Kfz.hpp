//
//  Kfz.hpp
//  ae_bwv_sophomore
//
//  Created by Marco Dung on 04.10.17.
//
//

#ifndef Kfz_hpp
#define Kfz_hpp

class Kfz {
private:
	double preis;
	double geschwindigkeit = 0.0;
	double tankinhalt = 0.0;
public:
	double getPreis();
	void setPreis(double);
	void auftanken(double);
	void bremsen(double);
	void beschleunigen(double);
};

#endif /* Kfz_hpp */
