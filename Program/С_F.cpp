// C_F
// #include "std_lib_facilities.h"
#include <iostream>
#include <clocale>
using namespace std;
int main () // ���r����� �� �++ ���������� � ���������� ������� main
{
setlocale(LC_CTYPE, "rus"); // ����� ������� ��������� ������
int n;
float c,f;
cout << "������� 1 ��� �������� ����� ������� � ����� ����������,\n" 
		<< "2 ��� �������� ����� ����������  � ����� �������: ";
cin >> n;
switch (n)
{

   case 1: cout << "������� ����������� �� ����������: "; cin >> f ; cout << "�������� �� ������� " << 5.0/9.0 *(f-32); break;
   case 2: cout << "������ ����������� �� �������: "; cin >> c ; cout << "�������� �� ���������� " << 9.0/5.0*c+32; break;
   default: cout << "����� ������������"; break;
}
// keep_window_open (); // �������� ����� �������
return 0;
}
