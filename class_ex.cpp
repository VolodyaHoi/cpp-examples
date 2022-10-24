// использование классов 

#include <iostream>

using namespace std;

class myClass { // созданик класса
    public: // уровенб допуска
        void print() // создание функции
        { 
            cout << "Hello world!" << endl; // функция класса
        } 
};

int main() {

    myClass myObject; // обьявление обьекта

    myObject.print(); // запувк функции из класса

    return 0;
}