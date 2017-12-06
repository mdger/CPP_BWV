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

/**
 composition of ZweiDFigur to create different
 more complex forms like a star or a figure
 
*/

class Figur {
private:
    std::vector<ZweiDFigur *> figur;
protected:
    void addTeilfigur(ZweiDFigur *);
public:
    virtual ~Figur() =0;
    ZweiDFigur * getTeilfigur(int);
    double flaeche();
    double umfang();
    
};


#endif /* Figur_hpp */
