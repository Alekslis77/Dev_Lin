// chcnt2.cpp
// ������� ����� ���� � �������� � ������
// #include "std_lib_facilities.h"
#include <iostream>
#include <clocale>
using namespace std;
#include <conio.h>				// ��� getche()
int main () // ���r����� �� �++ ���������� � ���������� ������� main
{
setlocale(LC_CTYPE, "rus"); // ����� ������� ��������� ������
int chcount = 0;
int wdcount = 1;			// ������ ����� ����� �������
char ch ;
cout << "\n������� ������: ";
while((ch = getche()) != '\r')			// ����, ���� �� ������ ������� Enter
{
	;
	if(ch == ' ')			// ���� ������ ������,
	   wdcount++;			// ���������������� ������� ����
	else					// �����
		chcount++;			// ���������������� ����� ��������
}							// ����� �����������
cout << "\n����: " << wdcount << endl;
cout << "����: " << chcount << endl;
// keep_window_open (); // �������� ����� �������
return 0;
}
