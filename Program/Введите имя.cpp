// Эта проrрамма просит ввести имя и выводит приветствие !
#include "std_lib_facilities.h"
#include <windows.h> // для SetConsoleCP
int main() // Проrраммы на С++ начинаются с выполнения функции main
{
SetConsoleCP(1251); // Поддержка кирилицы в консоли
SetConsoleOutputCP(1251); // ---------------------
cout << "Введите имя (и нажмите 'Enter'):\n";
string first_name; // Определение переменной строкового типа
cin >> first_name; // Ввод значения переменной first_name
cout << "Привет, " << first_name << "!\n";  
keep_window_open (); // Ожидание ввода символа
return 0;
}
