// ������� ��������� �� 20 ����� � 10 ��������
// #include "std_lib_facilities.h"
#include <iostream>
#include <clocale>
using namespace std;
int main () // ���r����� �� �++ ���������� � ���������� ������� main
{
setlocale(LC_CTYPE, "rus"); // ����� ������� ��������� ������
int i,j;
double n;
cout << "������� �����: "; 
cin >> n;
for(i=0; i<=19; i++)
	{
		for(j=1; j<=10; j++) cout << n*(i*10+j);cout << '\n';
	}
// keep_window_open (); // �������� ����� �������
return 0;
}
