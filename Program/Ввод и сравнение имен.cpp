// Ввод и сравнение имен
#include "std_lib_facilities.h"
#include <windows.h> // для SetConsoleCP
int main() // Проrраммы на С++ начинаются с выполнения функции main
{
SetConsoleCP(1251); // Поддержка кирилицы в консоли
SetConsoleOutputCP(1251); // ---------------------
cout << "Пожалуйста , введите два имени\n ";
string first;
string second;
cin >> first >> second ; // считываем две строки
if (first == second) cout << "имена совпадают\n";
if (first < second)
cout << first << " nредшествует " << second
     << " в алфавитном порядке" << '\n';
if ( first > second)
cout << first << " следует за " << second
     << " в алфавитном порядке" << '\n';
keep_window_open ();
return 0;
}
