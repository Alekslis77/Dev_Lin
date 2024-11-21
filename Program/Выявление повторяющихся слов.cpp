// Выявление повторяющихся слов
#include "std_lib_facilities.h"
#include <windows.h> // для SetConsoleCP
int main() // Проrраммы на С++ начинаются с выполнения функции main
{
SetConsoleCP(1251); // Поддержка кирилицы в консоли
SetConsoleOutputCP(1251); // ---------------------
	string previous = " "; // Переменная previous ;
							// инициализирована "не словом"
	string current; // Текущее слово
	while (cin >> current) 
	{ 							// Считываем поток слов
		if (previous == current) // Проверяем совпадение
								// с предыдущим словом
				cout << " Повторяющееся спово : " << current << '\n';
		previous = current ;
	}
keep_window_open ();
return 0;
}
