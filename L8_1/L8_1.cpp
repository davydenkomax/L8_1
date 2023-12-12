/*
    Дана непустая строка. Вывести коды ее первого и последнего символа
*/
#include <iostream>
#include <string>
#include <cstdio>

using namespace std;
int main() {
    setlocale(LC_ALL, "ru");
    system("chcp 1251");
    // Объявление строки
    cout << "Введите строку: " << endl;
    string s;
    // Ввод строки в переменную s
    getline(cin, s);
    // Вывод кодов элементов строки
    cout << "Код первого символа: " << (int)(s[0]) << endl;
    cout << "Код последнего символа: " << (int)(s[s.size() - 1]) << endl;
}