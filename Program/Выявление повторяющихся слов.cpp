// ��������� ������������� ����
#include "std_lib_facilities.h"
#include <windows.h> // ��� SetConsoleCP
int main() // ���r����� �� �++ ���������� � ���������� ������� main
{
SetConsoleCP(1251); // ��������� �������� � �������
SetConsoleOutputCP(1251); // ---------------------
	string previous = " "; // ���������� previous ;
							// ���������������� "�� ������"
	string current; // ������� �����
	while (cin >> current) 
	{ 							// ��������� ����� ����
		if (previous == current) // ��������� ����������
								// � ���������� ������
				cout << " ������������� ����� : " << current << '\n';
		previous = current ;
	}
keep_window_open ();
return 0;
}
