// ������� �������� � �����
// #include "std_lib_facilities.h"
#include <iostream>
#include <clocale>
#include <conio.h>   // ��� getche()
using namespace std;
int main () // ���r����� �� �++ ���������� � ���������� ������� main
{
setlocale(LC_CTYPE, "rus"); // ����� ������� ��������� ������
int i=0;
char ch='a';
long int x=0, cif;
cout << "������� �����: ";
for (i=1; i<=6; i++)
{
ch=getche();
cif=ch-48;
x=x*10+cif;
}
cout <<endl << "�� ����� �����: "<< x;
// keep_window_open (); // �������� ����� �������
return 0;
}
