// Базовые алгебраические функции / калькулятор

#include <iostream>

using namespace std;

int a, b; // Обозначение целочисленных переменных

int main() {

    cout << "Введите a: " << endl; // Ввод a
    cin >> a;

    cout << "Введите b: " << endl; // Ввод b
    cin >> b;

    cout << "Сумма: " + to_string(a + b) << endl; // Сложение 
    cout << "Разность: " + to_string(a - b) << endl; // Вычитание
    cout << "Произведение: " + to_string(a * b) << endl; // Произведение
    cout << "Деление целочисленное: " + to_string(a / b) << endl; // Частное
    cout << "Получение остатка: " + to_string(a % b) << endl; // Получение остатка после деления

    return 0;
}

// Для деления с остатком необходимо обозначаь переменные через double и использовать целочисленное 
// деление через /. to_string - конвертация числового значения в вид строки.