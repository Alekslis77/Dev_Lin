// chcount.cpp
// ������� ����� ���� � �������� � ������
// #include "std_lib_facilities.h"
#include <iostream>
#include <clocale>
using namespace std;
#include <conio.h>				// ��� getche()
int main () // ���r����� �� �++ ���������� � ���������� ������� main
{
setlocale(LC_CTYPE, "rus"); // ����� ������� ��������� ������
int chcount = 0;			// ����� ������������ ��������
int wdcount = 1;			// ����� ��������
char ch = 'a';				// ch ������ ����� ������������ ��������
cout << "\n������� ������: ";
while(ch != '\r')			// ����, ���� ������� ������ ������� Enter
{
	ch = getche();
	if(ch == ' ')
	   wdcount++;
	else
		chcount++;
}
cout << "\n����: " << wdcount << endl;
cout << "����: " << (chcount-1) << endl;
// keep_window_open (); // �������� ����� �������
return 0;
}
