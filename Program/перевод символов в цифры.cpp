// перевод символов в цифры
// #include "std_lib_facilities.h"
#include <iostream>
#include <clocale>
#include <conio.h>   // для getche()
using namespace std;
int main () // Проrраммы на С++ начинаются с выполнения функции main
{
setlocale(LC_CTYPE, "rus"); // вызов функции настройки локали
int i=0;
char ch='a';
long int x=0, cif;
cout << "Введите число: ";
for (i=1; i<=6; i++)
{
ch=getche();
cif=ch-48;
x=x*10+cif;
}
cout <<endl << "Вы ввели число: "<< x;
// keep_window_open (); // Ожидание ввода символа
return 0;
}
