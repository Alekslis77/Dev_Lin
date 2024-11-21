// Эта проrрамма выводит на экран сообщение "Hello, World !"
# include "std_lib_facilities.h"
#include <windows.h> // для SetConsoleCP
int main() // Проrраммы на С++ начинаются с выполнения функции main
{
SetConsoleCP(1251); // Поддержка кирилицы в консоли
SetConsoleOutputCP(1251); // ---------------------
cout << "Hello, Tima машина!\n"; // Вывод "Hello, World !"
keep_window_open (); // Ожидание ввода символа
return 0;
}
