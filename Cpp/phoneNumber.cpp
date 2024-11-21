// phoneNumber.cpp
// программа запрашивающая номер телефона
#include <iostream>
using namespace std;
//////////////////////////////////////////////////////
struct phone // объявление структуры
{
    int city; // код города 
    int area;  // номер телефонной станции
    int number;      // номер телефона абонента
};
//////////////////////////////////////////////////////
int main()
{
    phone my, you; // определение структурной переменной
    my.city = 212; // инициализация полей
    my.area = 767; // переменной part1
    my.number = 8900;
    // вывод значений полей на экран
    cout << "Введите код города, номер станции и номер абонента:" << endl;
    cin >> you.city >> you.area >> you.number;
    cout << "Мой номер (" << my.city << ") "
    << my.area << '-' << my.number << endl;
    cout << "Ваш номер (" << you.city << ") "
    << you.area << '-' << you.number << endl;
    return 0;
}