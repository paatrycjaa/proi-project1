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

    //bledy (valgrind+dbg)
    int *boxes = new int[2];
    Box *boxestwo = new Box[3];

    int x = 0;
    delete [] boxes;
    boxes[1] = 4.3; // po uwolnieniu pamieci
    int number = 2.4; // zamiana zmiennoprzecinkowej na int
    int number_two = 2.4/x; //dzielenie przez 0
    cout << number_two << endl;

    //ropzoczecie programu

    int process = 1;
    int action;
    while (process){
        printStart();
        cin >> action;
        switch (action){
            case 1: //wypisz skrzynke
                if(whichBox() == 1)
                    printBoxes(firstBox);
                else
                    printBoxes(secondBox);
                break;
            case 2: //dodaj figure do pudelka
                if(whichBox() == 1) // do skrzynki 1
                    firstBox.addFigure(whichBoxPart(), whichName(), whichColor());
                else //do skrzynki 2
                    secondBox.addFigure(whichBoxPart(), whichName(), whichColor());
                break;
            case 3: //wyjmij figure z pudelka
                if(whichBox() == 1) // z skrzynki 1
                    firstBox.deleteFigure(whichBoxPart());
                else //z skrzynki 2
                    secondBox.deleteFigure(whichBoxPart());
                break;
            case 4: //wyjdz z programu
                process = 0;
                break;
            default:
                cout << "Zly numer. Wpisz ponownie" << endl;
                // brak break
        }
    }


    return 0;
}

