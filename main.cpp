#include <iostream>
#include <string>

using namespace std;

class Figure{

private:
    string name;
    string color;

public:
    Figure(){ //konstruktor
        name = "null";
        color = "null";
    }

    //dostep
    string getName() const{
        return name;
    }
    string getColor() const{
        return color;
    }
    //modyfikacja
    void setName( string change ){
        name = change;
    }
    void setColor( string change ){
        color = change;
    }

};

class Box {
    private:
        string color;
        Figure leftTop;
        Figure rightTop;
        Figure leftBottom;
        Figure rightBottom;

    public:
        Box(){

        }

        //dostep
        string getFigureColor( int index ){
            string temp;
            switch (index){
            case 1: temp = leftTop.getColor();
                break;
            case 2: temp = rightTop.getColor();
                break;
            case 3: temp = leftBottom.getColor();
                break;
            case 4: temp = rightBottom.getColor();
                break;
            default: cout << "Mozna wybrac w zakresie 1-4" << endl;
            }
            return temp;
        }

        string getFigureName( int index ){
            string temp;
            switch (index){
            case 1: temp = leftTop.getName();
                break;
            case 2: temp = rightTop.getName();
                break;
            case 3: temp = leftBottom.getName();
                break;
            case 4: temp = rightBottom.getName();
                break;
            default: cout << "Mozna wybrac w zakresie 1-4" << endl;
            }
            return temp;
        }

        //modyfikacje
        void addFigure( int index, string name, string color ){
            if (getFigureName( index ) != "null"){
                cout << "W tej przegrodzie jest juz figura" << endl;
            }
            else {
                switch (index){
                case 1: leftTop.setName(name);
                        leftTop.setColor(color);
                        break;
                case 2: rightTop.setName(name);
                        rightTop.setColor(color);
                        break;
                case 3: leftBottom.setName(name);
                        leftBottom.setColor(color);
                        break;
                case 4: rightBottom.setName(name);
                        rightBottom.setColor(color);
                        break;
                default: cout << "Mozna wybrac w zakresie 1-4" << endl;
                        break;

                }
            }
        }

        void deleteFigure( int index ){
            if (getFigureName( index ) == "null"){
                cout << "W tej przegrodzie nie ma figury" << endl;
            }
            else {
                switch (index){
                case 1: leftTop.setName("null");
                        leftTop.setColor("null");
                        break;
                case 2: rightTop.setName("null");
                        rightTop.setColor("null");
                        break;
                case 3: leftBottom.setName("null");
                        leftBottom.setColor("null");
                        break;
                case 4: rightBottom.setName("null");
                        rightBottom.setColor("null");
                        break;
                default: cout << "Mozna wybrac w zakresie 1-4" << endl;
                        break;
                }
            }
        }

        void changeFigures (int index1, int index2){
            if (getFigureName( index1 ) == "null" || getFigureName( index2 ) == "null" );
        }
};

void printBoxes (Box firstBox){
    for(int i =1 ; i<5; i++){
        cout << "\t Przegroda" << i << endl;
        cout << " \t\t figura:" << firstBox.getFigureName(i)<< endl;
        cout << "\t\t kolor:" << firstBox.getFigureColor(i)<< endl << endl;
    }
}

void printStart(){

    cout << "Co chcesz zrobic" << endl;
    cout << "Wpisz 1, zeby wypisac co jest w skrzynce" << endl;
    cout << "Wpisz 2, zeby dodac figure do skrzynki" << endl;
    cout << "Wpisz 3, zeby usunac figure z skrzynki" << endl;
    cout << "Wpisz 4, zeby wyjsc" << endl << endl;

}

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

string whichName(){
    string name;
    cout << "Podaj ksztalt figury" << endl;
    cin >> name;
    return name;
}

string whichColor(){
    string color;
    cout << "Podaj kolor figury" << endl;
    cin >> color;
    return color;
}

int main(){

    Box firstBox;
    Box secondBox;

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
                process = 0;
                break;
            default:
                cout << "Zly numer. Wpisz ponownie" << endl;
        }
    }


    return 0;
}

