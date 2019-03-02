/**
*Name : box.h
*Purpose : PROI Projekt_1 - figury w pudelku
*@author Patrycja Cieplicka
*@version 1.0 2/03/2019
*/

#ifndef BOX_H_
#define BOX_H_

class Figure{

private:
    string name;
    string color;

public:
    Figure();

    //dostep
    string getName() const;
    string getColor() const;
    //modyfikacja
    void setName( string change );
    void setColor( string change );

};

class Box {
private:
    string color;
    Figure leftTop;
    Figure rightTop;
    Figure leftBottom;
    Figure rightBottom;

public:
    //konstruktor
    Box();

    //dostep
    string getFigureColor( int index );
    string getFigureName( int index );

    //modyfikacje
    void addFigure( int index, string name, string color ){;
    void deleteFigure( int index );
};

void printBoxes (Box firstBox);
void printStart();
int whichBox();
int whichBoxPart();
string whichName();
string whichColor();

#endif //BOX_H_
