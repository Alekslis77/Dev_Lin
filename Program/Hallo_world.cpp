// Эта проrрамма выводит на экран сообщение "Hello, World !"
#include "std_lib_facilities.h"
#include <clocale>
int main () // Проrраммы на С++ начинаются с выполнения функции main
{
setlocale(LC_CTYPE, "rus"); // вызов функции настройки локали
cout << "Hello, progrmming !\nHere we go !\n"; // Вывод "Hello, World !"
keep_window_open (); // Ожидание ввода символа
return 0;
}
