// ��� ���r����� ������ ������ ��� � ������� ����������� !
#include "std_lib_facilities.h"
#include <windows.h> // ��� SetConsoleCP
int main() // ���r����� �� �++ ���������� � ���������� ������� main
{
SetConsoleCP(1251); // ��������� �������� � �������
SetConsoleOutputCP(1251); // ---------------------
cout << "������� ��� (� ������� 'Enter'):\n";
string first_name; // ����������� ���������� ���������� ����
cin >> first_name; // ���� �������� ���������� first_name
cout << "������, " << first_name << "!\n";  
keep_window_open (); // �������� ����� �������
return 0;
}
