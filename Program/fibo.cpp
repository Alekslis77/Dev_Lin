// fibo.cpp
// генерирование чисел Фибоначчи с помощью цикла while
// #include "std_lib_facilities.h"
#include <iostream>
#include <clocale>
using namespace std;
int main () 		// Проrраммы на С++ начинаются с выполнения функции main
{
setlocale(LC_CTYPE, "rus"); // вызов функции настройки локали
// граница типа unsigned long
const unsigned long limit = 4294967295;
unsigned long next = 0;		// предпоследний член  
unsigned long last = 1;		// последний член
while(next < limit/2)		// результат не должен быть слишком большим
  {
  cout << last << "  "; 	// вывод последнего члена
  long sum = next + last;   // сложение двух последних членов
  next = last;				// обновление предпоследнего
  last = sum;				// и последнего членов
  }
  cout << endl;
// keep_window_open (); // Ожидание ввода символа
  return 0;
}
