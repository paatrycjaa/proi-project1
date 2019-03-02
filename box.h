/**
*Name : box.h
*Purpose : PROI Projekt_1 - figury w pudelku
*@author Patrycja Cieplicka
*@version 1.0 2/03/2019
*/

#ifndef BOX_H_
#define BOX_H_

#include <string>
#include "figure.h"

class Box {
private:
    std::string color;
    Figure leftTop;
    Figure rightTop;
    Figure leftBottom;
    Figure rightBottom;

public:
    //konstruktor
    Box();

    //dostep
    std::string getFigureColor ( int index ) const;
    std::string getFigureName  (int index ) const;
    //modyfikacje
    void addFigure( int index, std::string name, std::string color );
    void deleteFigure( int index );
};

void printBoxes (Box firstBox);
void printStart();
int whichBox();
int whichBoxPart();
std::string whichName();
std::string whichColor();

#endif //BOX_H_
