/* Задача 3 — Средно ниво
Тема: Проверка за право на отстъпка
Условие

Даден е код, който трябва да въведе възраст на клиент и сума на покупката.

Клиентът получава отстъпка, ако:

е на възраст под 18 години или
е на възраст над 65 години или
покупката е над 100 лв. */

#include <iostream>
using namespace std;

int main() {
    int age;
    double price;

    cout << "Enter age: ";
    cin >> age;
    cout << "Enter price: "
    

    if (age < 18 || age > 65 && price  100) {
        cout << "Discount available" << endl;
    else {
        cout << "No discount" << endl;
    }

    return 0;
}
