// tablearg.cpp
// demonstrates simple function 
#include <iostream>
#include <clocale>
using namespace std;
void repchar(char, int); // объявление функции (прототип)
int main() 
{
	setlocale(LC_CTYPE, "rus");
	repchar('-', 43); // вызов функции
	cout << "Тип данных    Диапазон" << endl; 
	repchar('=', 23); // вызов функции
	cout << "char          -128...127" << endl
	<< "short         -32 768...32 767" << endl
	<< "int           Системно-зависимый" << endl
	<< "long          -2 147 483 648...2 147 483 647" << endl; 
	repchar('-', 43); // вызов функции
	return 0;
}
//--------------------------------------------------------
// определение функции repchar()
void repchar(char ch, int n) // заголовок функции 
{
for(int j = 0; j < n; j++) // тело функции 
cout << ch; cout << endl;
}
