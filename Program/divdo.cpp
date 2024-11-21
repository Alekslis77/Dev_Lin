// divdo.cpp
// применение цикла do
// #include "std_lib_facilities.h"
#include <iostream>
#include <clocale>
using namespace std;
int main () 		// Проrраммы на С++ начинаются с выполнения функции main
{
setlocale(LC_CTYPE, "rus"); // вызов функции настройки локали
long dividend, divisor;
char ch;  
  do							// начало цикла
  {								// действия
  cout << "Введите делимое:  " ; cin >> dividend;
  cout << "Введите делитель:  " ; cin >> divisor;
  cout << "Частное равно  " << dividend / divisor;
  cout << ", остаток равен  " << dividend % divisor;
  cout << "\nЕще раз? (y/n):  ";
  cin >> ch;
  }
  while(ch != 'n');		// условие цикла
// keep_window_open (); 
  return 0;
}
