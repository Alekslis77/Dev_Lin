// chcnt2.cpp
// подсчет числа слов и символов в строке
// #include "std_lib_facilities.h"
#include <iostream>
#include <clocale>
using namespace std;
#include <conio.h>				// для getche()
int main () // Проrраммы на С++ начинаются с выполнения функции main
{
setlocale(LC_CTYPE, "rus"); // вызов функции настройки локали
int chcount = 0;
int wdcount = 1;			// пробел между двумя словами
char ch ;
cout << "\nВведите строку: ";
while((ch = getche()) != '\r')			// цикл, пока не нажата клавиша Enter
{
	;
	if(ch == ' ')			// если введен пробел,
	   wdcount++;			// инкрементировать счетчик слов
	else					// иначе
		chcount++;			// инкрементировать число символов
}							// вывод результатов
cout << "\nСлов: " << wdcount << endl;
cout << "Букв: " << chcount << endl;
// keep_window_open (); // Ожидание ввода символа
return 0;
}
