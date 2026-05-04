/* Задача 2 — Начално към средно ниво
Тема: Проверка на оценка
Условие

Даден е код, който трябва да въведе оценка от 2 до 6 и да изведе текстова характеристика:

ако оценката е 6 — „Excellent“;
ако е 5 или 4 — „Good“;
ако е 3 — „Satisfactory“;
ако е 2 — „Poor“;
при друга стойност — „Invalid grade“.*/

#include <iostream>
using namespace std;

int main() {
    int grade

    cout << "Enter grade: ";
    cin >> grade;

    if (grade = 6) {
        cout << "Excellent" << endl;
    } else if (grade == 5 || grade == ) {
        cout << "Good" << endl;
    } else if grade == 3 {
        cout << "Satisfactory" << endl;
    } else if (grade == 2) {
        cout << "Poor" << endl;
    } else
        cout << "Invalid grade" << endl;

    return 0;
}
