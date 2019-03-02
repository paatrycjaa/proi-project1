/**
*Name : box.cpp
*Purpose : PROI Projekt_1 - figury w pudelku
*@author Patrycja Cieplicka
*@version 1.0 2/03/2019
*/

#include <iostream>
#include <string>

using namespace std;
#include "figure.h"


    Figure::Figure(){ //konstruktor
        name = "null";
        color = "null";
    }

    //dostep
    string Figure::getName() const{
        return name;
    }
    string Figure::getColor() const{
        return color;
    }
    //modyfikacja
    void Figure::setName( string change ){
        name = change;
    }
    void Figure::setColor( string change ){
        color = change;
    }
