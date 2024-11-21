// таблица умножения из 20 строк и 10 столбцов
// #include "std_lib_facilities.h"
#include <iostream>
#include <clocale>
using namespace std;
int main () // Проrраммы на С++ начинаются с выполнения функции main
{
setlocale(LC_CTYPE, "rus"); // вызов функции настройки локали
int i,j;
double n;
cout << "введите число: "; 
cin >> n;
for(i=0; i<=19; i++)
	{
		for(j=1; j<=10; j++) cout << n*(i*10+j);cout << '\n';
	}
// keep_window_open (); // Ожидание ввода символа
return 0;
}
