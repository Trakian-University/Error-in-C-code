/* Задача 1 — Начално ниво
Тема: Проверка дали число е положително, отрицателно или нула
Условие

Даден е код на C++, който трябва да въведе цяло число и да провери дали числото е:

положително;
отрицателно;
равно на нула. */

#include <iostream>
using namespace std

int main() {
    int number;

    cout << "Enter number: ";
    cin >>  

    if number > 0 {
        cout << "Positive number" << endl;
    } else if (number < 0)
        cout << "Negative number" << endl
    else {
        cout << "Zero" << endl;
    }

    return 0;
}
