#include <iostream>
using namespace std;

int main() {
    setlocale(0, ".1251");
    int num;

    cout << "Введiть цiле число: ";
    cin >> num;

    cout << "Вихiдний номер: " << num << endl;

    cout << "Постiнкремент: " << num++ << endl;

    cout << "Пiсля постiнкременту: " << num << endl;

    cout << "Попереднє збiльшення: " << ++num << endl;

    cout << "Постдекремент: " << num-- << endl;

    cout << "Пiсля постдекременту: " << num << endl;

    cout << "Попереднє зменшення: " << --num << endl;

    return 0;
}