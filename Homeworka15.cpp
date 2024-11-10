#include <string.h>
#include <iostream>
#include <ctime>
using namespace std;

class Square {
    int length = 5;
public:
    Square() {
        
    }

    void SquarePrint() {
        for (int i = 0; i < length; i++) {
            for (int j = 0; j < length; j++) {
                cout << "#";
            }
            cout << endl;
        }
    }
};

class Triangle {
    int length = 5;
public:
    Triangle() {

    }

    void TrianglePrint() {
        /*for (int i = 0; i < length; i++) {
            for (int j = 0; j < length; j++) {
                cout << "#";
            }
            cout << endl;
        }*/

        cout << "     # " << endl;
        cout << "    ### " << endl;
        cout << "   ##### " << endl;
        cout << "  ####### " << endl;
        cout << " ######### " << endl;
    }
};

class rectangle {
    int length = 5;
public:
    rectangle() {

    }

    void rectanglePrint() {
        for (int i = 0; i < length; i++) {
            for (int j = 0; j < (length * 2); j++) {
                cout << "##";
            }
            cout << endl;
        }
    }
};

int main()
{
    std::cout << "Hello World!\n";

    Square obj;
    Triangle obj2;
    rectangle obj3;
    obj.SquarePrint();
    cout << "<----------------->" << endl;
    obj2.TrianglePrint();
    cout << "<----------------->" << endl;
    obj3.rectanglePrint();

}


