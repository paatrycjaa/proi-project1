/**
*Name : main.cpp
*Purpose : PROI Projekt_1 - figury w pudelku
*@author Patrycja Cieplicka
*@version 1.0 2/03/2019
*/

#include <iostream>
#include <string>
#include "box.h"

using namespace std;

int main(){

    Box firstBox;
    Box secondBox;

    //rozpoczenie programu
    int process = 1;
    int action;
    while (process){
        printStart();
        cin >> action;
        switch (action){
            case 1:                     //wypisz zawartosc skrzynki
                if(whichBox() == 1)     //1 skrzynka
                    printBoxes(firstBox);
                else                    //2 skrzynka
                    printBoxes(secondBox);
                break;
            case 2:                     // dodaj do skrzynki
                if(whichBox() == 1)     // 1 skrzynka
                    firstBox.addFigure(whichBoxPart(), whichName(), whichColor());
                else                    //2 skrzynka
                    secondBox.addFigure(whichBoxPart(), whichName(), whichColor());
                break;
            case 3:                     //wyjmij ze skrzynki
                if(whichBox() == 1)     //1 skrzynka
                    firstBox.deleteFigure(whichBoxPart());
                else                    //2 skrzynka
                    secondBox.deleteFigure(whichBoxPart());
                break;
            case 4:                     //zamknij program
                process = 0;
                break;
            default:
                cout << "Zly numer. Wpisz ponownie" << endl;
                cin.clear();
                break;
        }
    }


    return 0;
}

