//
//  Figur.hpp
//  ae_bwv_sophomore
//
//  Created by Marco Dung on 05.12.17.
//
//

#ifndef Figur_hpp
#define Figur_hpp

#include "ZweiDFigur.hpp"
#include <vector>
#include <memory>

/**
 composition of ZweiDFigur to create different
 more complex forms like a star or a figure
 
*/

class Figur {
private:
	std::vector<std::shared_ptr<ZweiDFigur>> teilfiguren;
protected:
	void addTeilfigur(std::shared_ptr<ZweiDFigur>);
	std::vector<std::shared_ptr<ZweiDFigur>> getTeilfiguren();
public:
    virtual ~Figur() =0;
	std::shared_ptr<ZweiDFigur> getTeilfigur(int);
    virtual double flaeche();
    virtual double umfang();
    
};


#endif /* Figur_hpp */
