// ifelse.cpp
// ���������� ����������� if ... else
// #include "std_lib_facilities.h"
#include <iostream>
#include <clocale>
using namespace std;
int main () // ���r����� �� �++ ���������� � ���������� ������� main
{
setlocale(LC_CTYPE, "rus"); // ����� ������� ��������� ������
int x;
cout << "\n������� �����: ";
cin >> x;
if(x>100)
	cout << "��� ����� ������, ��� 100\n";
else
	cout << "��� ����� �� ������, ��� 100\n";
// keep_window_open (); // �������� ����� �������
return 0;
}
