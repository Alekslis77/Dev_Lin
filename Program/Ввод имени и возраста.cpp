// Ввод имени и возраста
#include "std_lib_facilities.h"
#include <windows.h> // для SetConsoleCP
int main() // Проrраммы на С++ начинаются с выполнения функции main
{
SetConsoleCP(1251); // Поддержка кирилицы в консоли
SetConsoleOutputCP(1251); // ---------------------
cout << "Пожалуйста введите имя и сколько Вам лет !\n";
string first_name = "???";
double age=-1;
cin >> first_name >> age;
cout << "Привет, " << first_name << " (Ваш возраст " << age*12 << " месяцев)\n";
keep_window_open (); // Ожидание ввода символа
return 0;
}
