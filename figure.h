/**
*Name : figure.h
*Purpose : PROI Projekt_1 - figury w pudelku
*@author Patrycja Cieplicka
*@version 1.0 2/03/2019
*/

#ifndef FIGURE_H_
#define FIGURE_H_

#include <string>

class Figure{

private:
    std::string name;
    std::string color;

public:
    Figure();

    //dostep
    std::string getName() const;
    std::string getColor() const;
    //modyfikacja
    void setName( std::string change );
    void setColor( std::string change );

};

#endif //FIGURE_H_
