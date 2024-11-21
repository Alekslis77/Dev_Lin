// prime.cpp
// применение цикла if для определения простых чисел
// #include "std_lib_facilities.h"
#include <iostream>
#include <clocale>
using namespace std;
#include <process.h>	// для exit() 
int main () // Проrраммы на С++ начинаются с выполнения функции main
{
setlocale(LC_CTYPE, "rus"); // вызов функции настройки локали
unsigned long n,j;
cout << "Введите число: ";
cin >> n;			// ввод проверяемого числа
for(j=2; j<=n/2; j++) // деление на целые числа,
if(n%j == 0)			// начиная с 2; если остаток
{						// нулевой, то число не простое
cout << "Число не простое: делится на "  << j << endl;
exit(0);				// выход из программы
}
cout << "Число является простым\n";
// keep_window_open (); // Ожидание ввода символа
return 0;
}
