// C_F
// #include "std_lib_facilities.h"
#include <iostream>
#include <clocale>
using namespace std;
int main () // Проrраммы на С++ начинаются с выполнения функции main
{
setlocale(LC_CTYPE, "rus"); // вызов функции настройки локали
int n;
float c,f;
cout << "Нажмите 1 для перевода шкалы Цельсия в шкалу Фаренгейта,\n" 
		<< "2 для перевода шкалы Фаренгейта  в шкалу Цельсия: ";
cin >> n;
switch (n)
{

   case 1: cout << "Введите температуру по Фаренгейту: "; cin >> f ; cout << "Значение по Цельсию " << 5.0/9.0 *(f-32); break;
   case 2: cout << "Ведите температуру по Цельсию: "; cin >> c ; cout << "Значение по Фаренгейту " << 9.0/5.0*c+32; break;
   default: cout << "выбор неправельный"; break;
}
// keep_window_open (); // Ожидание ввода символа
return 0;
}
