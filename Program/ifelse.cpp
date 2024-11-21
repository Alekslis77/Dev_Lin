// ifelse.cpp
// применение конструкции if ... else
// #include "std_lib_facilities.h"
#include <iostream>
#include <clocale>
using namespace std;
int main () // Проrраммы на С++ начинаются с выполнения функции main
{
setlocale(LC_CTYPE, "rus"); // вызов функции настройки локали
int x;
cout << "\nВведите число: ";
cin >> x;
if(x>100)
	cout << "Это число больше, чем 100\n";
else
	cout << "Это число не больше, чем 100\n";
// keep_window_open (); // Ожидание ввода символа
return 0;
}
