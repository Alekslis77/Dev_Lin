// ���� � ��������� ����
#include "std_lib_facilities.h"
#include <windows.h> // ��� SetConsoleCP
int main() // ���r����� �� �++ ���������� � ���������� ������� main
{
SetConsoleCP(1251); // ��������� �������� � �������
SetConsoleOutputCP(1251); // ---------------------
cout << "���������� , ������� ��� �����\n ";
string first;
string second;
cin >> first >> second ; // ��������� ��� ������
if (first == second) cout << "����� ���������\n";
if (first < second)
cout << first << " n����������� " << second
     << " � ���������� �������" << '\n';
if ( first > second)
cout << first << " ������� �� " << second
     << " � ���������� �������" << '\n';
keep_window_open ();
return 0;
}
