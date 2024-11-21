#include "std_lib_facilities.h"
#include <windows.h> // для SetConsoleCP
int main() // Проrраммы на С++ начинаются с выполнения функции main
{
SetConsoleCP(1251); // Поддержка кирилицы в консоли
SetConsoleOutputCP(1251); // ---------------------
cout << " Пожалуйста , введите значение с плавающей точкой : " ;
double n;
cin >> n;
cout << "n == " << n
	 << "\nn+1 == " << n+1
	 << "\nтри раза по n == " << 3*n
	 << "\nдва раза по n == " << n+n
	 << "\nn в квадрате == " << n*n
	 << "\nполовина n == " << n/2
	 << "\nкорень квадратный из n = " << sqrt(n)
	 << '\n'; // переход на новую строку
keep_window_open ();
return 0;
}
