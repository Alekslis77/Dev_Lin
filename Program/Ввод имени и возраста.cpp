// ���� ����� � ��������
#include "std_lib_facilities.h"
#include <windows.h> // ��� SetConsoleCP
int main() // ���r����� �� �++ ���������� � ���������� ������� main
{
SetConsoleCP(1251); // ��������� �������� � �������
SetConsoleOutputCP(1251); // ---------------------
cout << "���������� ������� ��� � ������� ��� ��� !\n";
string first_name = "???";
double age=-1;
cin >> first_name >> age;
cout << "������, " << first_name << " (��� ������� " << age*12 << " �������)\n";
keep_window_open (); // �������� ����� �������
return 0;
}
