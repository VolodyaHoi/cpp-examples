// Использование switch и case

#include <iostream>

using namespace std;

int num; // обьвяление переменной для номера страны

int main() {

    cout << "Страны:\n1.Россия\n2.США\n3.Великобритания\n4.Франция" << endl; // Вывод списка стран

    cout << "Введите номер страны: " << endl; // Ввод номера страны
    cin >> num;

    switch(num) // switch - в скобках указывается переменная,взависимости значения которой будет
    {                   // выполняться какое либо действие,в данном случае вывод столицы выбранной
                                                                            // страны
        case 1: // case - при значении переменной num = 1 будет выводиться столица первой в списке страны                                                                   
            cout << "Столица России - Москва" << endl; // вывод столицы
        break; // прекращение выполнения case

        case 2:
            cout << "Столица США - Вашингтон" << endl;
        break;

        case 3:
            cout << "Столица Великобритании - Лондон" << endl;
        break;

        case 4:
            cout << "Столица Франции - Париж" << endl;
        break;

    }

    return 0;
}