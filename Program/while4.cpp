// while4.cpp
// Возведение в четвертую степень целых чисел
// #include "std_lib_facilities.h"
#include <iostream>
#include <iomanip>	// для setw
#include <clocale>
using namespace std;
int main () 		// Проrраммы на С++ начинаются с выполнения функции main
{
  setlocale(LC_CTYPE, "rus"); // вызов функции настройки локали
  int pow = 1;			// первое возводимое число равно 1
  int numb = 1;			// 1 в 4 степени равна 1
  while(pow < 10000)		// цикл, пока в степени не более 4 цифр
  {
  cout << setw(2) << numb; 			// вывод числа
  cout << setw(5) << pow << endl;   // и его 4-й степени
  ++numb;							// инкремент текущего числа
  pow = numb*numb*numb*numb;		// вычисление 4-й степени
  }
  cout << endl;
// keep_window_open (); // Ожидание ввода символа
  return 0;
}
