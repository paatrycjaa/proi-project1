/**
*Name : box.cpp
*Purpose : PROI Projekt_1 - figury w pudelku
*@author Patrycja Cieplicka
*@version 1.0 2/03/2019
*/

#include <iostream>
#include <string>

using namespace std;
#include "box.h"
#include "figure.h"

Box::Box(){
}

//funkcje dostepu
string Box::getFigureColor( int index ) const{          //funkcja zwracajaca kolor figury
    string temp;
    switch (index){
        case 1: temp = leftTop.getColor();              //przegrodka 1
                break;
        case 2: temp = rightTop.getColor();             //przegrodka 2
                break;
        case 3: temp = leftBottom.getColor();           //przegrodka 3
                break;
        case 4: temp = rightBottom.getColor();          //przegrodka 4
                break;
        default: cout << "Mozna wybrac w zakresie 1-4" << endl;
    }
    return temp;
}

string Box::getFigureName( int index ) const{           //funkcja zwracajaca nazwe figury
            string temp;
            switch (index){
            case 1: temp = leftTop.getName();           //przegrodka 1
                break;
            case 2: temp = rightTop.getName();          //przegrodka 2
                break;
            case 3: temp = leftBottom.getName();        //przegrodka 3
                break;
            case 4: temp = rightBottom.getName();       //przegrodka 4
                break;
            default: cout << "Mozna wybrac w zakresie 1-4" << endl;
            }
            return temp;
        }

        //modyfikacje
        void Box::addFigure( int index, string name, string color ){ //funkcja dodajaca figure do przegrodki
            if (getFigureName( index ) != "null"){
                cout << "W tej przegrodzie jest juz figura" << endl;
            }
            else {
                switch (index){
                case 1: leftTop.setName(name);      //przegrodka 1
                        leftTop.setColor(color);
                        break;
                case 2: rightTop.setName(name);     //przegrodka 2
                        rightTop.setColor(color);
                        break;
                case 3: leftBottom.setName(name);   //przegrodka 3
                        leftBottom.setColor(color);
                        break;
                case 4: rightBottom.setName(name);  //przegrodka 4
                        rightBottom.setColor(color);
                        break;
                default: cout << "Mozna wybrac w zakresie 1-4" << endl;
                        break;

                }
            }
        }

        void Box::deleteFigure( int index ){            //funkcja wyjmujaca figure ze skrzynki
            if (getFigureName( index ) == "null"){
                cout << "W tej przegrodzie nie ma figury" << endl;
            }
            else {
                switch (index){
                case 1: leftTop.setName("null");        //przegrodka 1 ; null = brak
                        leftTop.setColor("null");
                        break;
                case 2: rightTop.setName("null");       //przegrodka 2
                        rightTop.setColor("null");
                        break;
                case 3: leftBottom.setName("null");     //przegrodka 3
                        leftBottom.setColor("null");
                        break;
                case 4: rightBottom.setName("null");    //przegrodka 4
                        rightBottom.setColor("null");
                        break;
                default: cout << "Mozna wybrac w zakresie 1-4" << endl;
                        break;
                }
            }
        }

;

//funkcja drukujaca zawartosc skrzynki
void printBoxes (Box firstBox){
    for(int i =1 ; i<5; i++){
        cout << "\t Przegroda" << i << endl;
        cout << " \t\t figura:" << firstBox.getFigureName(i)<< endl;
        cout << "\t\t kolor:" << firstBox.getFigureColor(i)<< endl << endl;
    }
}

//funkcja drukujaca instrukcje na poczatku programu
void printStart(){

    cout << "Co chcesz zrobic" << endl;
    cout << "Wpisz 1, zeby wypisac co jest w skrzynce" << endl;
    cout << "Wpisz 2, zeby dodac figure do skrzynki" << endl;
    cout << "Wpisz 3, zeby usunac figure z skrzynki" << endl;
    cout << "Wpisz 4, zeby wyjsc" << endl << endl;

}

//funkcja zwracajaca ktora skrzynia wybrana
int whichBox(){
    int box;
    cout << "Ktora skrzynia? (1 lub 2)" << endl;
    cin >> box;
    while(box != 1 && box != 2 ){
        cout << "Zly numer. Ktora skrzynia? (1 lub 2)" << endl;
        cin >> box;
        }

    return box;
}


//funkcja zwracajaca ktora przegrodka wybrana
int whichBoxPart(){
    int box;
    cout << "Ktora przegroda? (1-4)" << endl;
    cin >> box;
    while(box < 1 || box > 4){
        cout << "Zly numer. Ktora przegroda? (1-4)" << endl;
        cin >> box;
        }
    return box;
}

// funkcja zwracajaca wybrana nazwe figury
string whichName(){
    string name;
    cout << "Podaj ksztalt figury" << endl;
    cin >> name;
    return name;
}

//funkcja zwracajaca kolor figury
string whichColor(){
    string color;
    cout << "Podaj kolor figury" << endl;
    cin >> color;
    return color;
}
