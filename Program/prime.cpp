// prime.cpp
// ���������� ����� if ��� ����������� ������� �����
// #include "std_lib_facilities.h"
#include <iostream>
#include <clocale>
using namespace std;
#include <process.h>	// ��� exit() 
int main () // ���r����� �� �++ ���������� � ���������� ������� main
{
setlocale(LC_CTYPE, "rus"); // ����� ������� ��������� ������
unsigned long n,j;
cout << "������� �����: ";
cin >> n;			// ���� ������������ �����
for(j=2; j<=n/2; j++) // ������� �� ����� �����,
if(n%j == 0)			// ������� � 2; ���� �������
{						// �������, �� ����� �� �������
cout << "����� �� �������: ������� �� "  << j << endl;
exit(0);				// ����� �� ���������
}
cout << "����� �������� �������\n";
// keep_window_open (); // �������� ����� �������
return 0;
}
