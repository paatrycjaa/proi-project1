#include <iostream>
#include <string>

using namespace std;

class Fruit{

private:
    string name;

public:
    Fruit(){ //konstruktor
        name = "null";
    }

    //dostep
    string getName() const{
        return name;
    }
    //modyfikacja
    void setName( string change ){
        name = change;
    }

};

class Box {
    private:
        string color;

    public:
        Box(){

        }
        Fruit leftTop;
        Fruit rightTop;
        Fruit leftBottom;
        Fruit rightBottom;

        string getFruit( int index ){
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
};

int main(){

    Box firstBox;
    cout << firstBox.getFruit(1) << endl;
    cout << firstBox.getFruit(2) << endl;
    cout << firstBox.getFruit(3) << endl;
    cout << firstBox.getFruit(4) << endl;

    firstBox.leftBottom.setName("jablko");
    cout << firstBox.getFruit(3) << endl;



return 0;
}

