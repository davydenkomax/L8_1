/*
    Дана непустая строка. Вывести коды ее первого и последнего символа
*/
#include <iostream>
#include <string>
#include <cstdio>

/**
 * @brief Проверяет строку на пустую
 * @param s проверяемая строка
 * @return false или true
*/
bool isEmpty(const std::string s) {
    if (s[0] == '\0') return true;
    bool flag;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') {
            flag = true;
        }
        else {
            flag = false;
            break;
        }
    }
    if (flag) {
        return true;
    }
    else {
        return false;
    }
}

using namespace std;
int main() {
    setlocale(LC_ALL, "ru");
    system("chcp 1251");
    // Объявление строки
    cout << "Введите строку: " << endl;
    string s;
    // Ввод строки в переменную s
    getline(cin, s);
    // Проверка на пустую строку
    if (isEmpty(s)) {
        cerr << "Строка пустая";
        return 1;
    }
    // Вывод кодов элементов строки
    cout << "Код первого символа: " << (int)(s[0]) << endl;
    cout << "Код последнего символа: " << (int)(s[s.size() - 1]) << endl;
}