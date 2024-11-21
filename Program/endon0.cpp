// endon0/cpp
// Применение цикла WHILE
// #include "std_lib_facilities.h"
#include <iostream>
#include <clocale>
using namespace std;
int main () // Проrраммы на С++ начинаются с выполнения функции main
{
  setlocale(LC_CTYPE, "rus"); // вызов функции настройки локали
  int n=99;			// n недолжна быть равна 0 перед началом цикла
  while(n!=0)		// цикл, пока значение n не равно 0
  cin >> n;			// считывание n c rkfdbfnehs
  cout << "Hello, World"; // Вывод "Hello, World !"
  cout << endl;
// keep_window_open (); // Ожидание ввода символа
  return 0;
}
