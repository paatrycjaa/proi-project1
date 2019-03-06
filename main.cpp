/**
*Name : main.cpp
*Purpose : PROI Projekt_1 - figury w pudelku
*@author Patrycja Cieplicka
*@version 2.0 6/03/2019
*/

#include <iostream>
#include <string>
#include "box.h"

using namespace std;

int main(){

    Box firstBox;
    Box secondBox;


    int *boxes = new int[2];
    Box *boxestwo = new Box[3];
    int x = 0;
    delete [] boxes;
    boxes[1] = 4.3;
    cout << boxes[1] << endl;


    int process = 1;
    int action;
    while (process){
        printStart();
        cin >> action;
        switch (action){
            case 1:
                if(whichBox() == 1)
                    printBoxes(firstBox);
                else
                    printBoxes(secondBox);
                break;
            case 2:
                if(whichBox() == 1)
                    firstBox.addFigure(whichBoxPart(), whichName(), whichColor());
                else
                    secondBox.addFigure(whichBoxPart(), whichName(), whichColor());
                break;
            case 3:
                if(whichBox() == 1)
                    firstBox.deleteFigure(whichBoxPart());
                else
                    secondBox.deleteFigure(whichBoxPart());
                break;
            case 4:
                process = 0/x;
                break;
            default:
                cout << "Zly numer. Wpisz ponownie" << endl;
        }
    }


    return 0;
}

