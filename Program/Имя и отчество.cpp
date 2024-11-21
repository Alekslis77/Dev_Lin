#include "std_lib_facilities.h"
#include <windows.h> // для SetConsoleCP
int main() // Проrраммы на С++ начинаются с выполнения функции main
{
SetConsoleCP(1251); // Поддержка кирилицы в консоли
SetConsoleOutputCP(1251); // ---------------------
cout << "Пожалуйста , введите свое иия и отчество\n";
string first;
string second;
cin >> first >> second;
string name = first + ' ' + second; // Конкатенация строк
cout << "Привет, " << name << " !\n";
keep_window_open ();
return 0;
}
