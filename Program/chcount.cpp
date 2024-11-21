// chcount.cpp
// подсчет числа слов и символов в строке
// #include "std_lib_facilities.h"
#include <iostream>
#include <clocale>
using namespace std;
#include <conio.h>				// для getche()
int main () // Проrраммы на С++ начинаются с выполнения функции main
{
setlocale(LC_CTYPE, "rus"); // вызов функции настройки локали
int chcount = 0;			// число непробельных символов
int wdcount = 1;			// число пробелов
char ch = 'a';				// ch должна иметь определенное значение
cout << "\nВведите строку: ";
while(ch != '\r')			// цикл, пока небудет нажата клавиша Enter
{
	ch = getche();
	if(ch == ' ')
	   wdcount++;
	else
		chcount++;
}
cout << "\nСлов: " << wdcount << endl;
cout << "Букв: " << (chcount-1) << endl;
// keep_window_open (); // Ожидание ввода символа
return 0;
}
