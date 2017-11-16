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
	double geschwindigkeit;
	double tankinhalt;
	double tankinhaltMax;
protected:
	void setTankinhalt(double liter);
public:
	Kfz(double tankinhaltMax);
	double getGeschwindigkeit();
	double getTankinhaltMax();
	double getTankinhalt();

	void auftanken(double liter);
	void bremsen(double kmH);
	void beschleunigen(double kmH);
	virtual void reisebereitMachen() =0;

	virtual ~Kfz();
};

#endif /* Kfz_hpp */
