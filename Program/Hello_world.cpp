// ��� ���r����� ������� �� ����� ��������� "Hello, World !"
# include "std_lib_facilities.h"
#include <windows.h> // ��� SetConsoleCP
int main() // ���r����� �� �++ ���������� � ���������� ������� main
{
SetConsoleCP(1251); // ��������� �������� � �������
SetConsoleOutputCP(1251); // ---------------------
cout << "Hello, Tima ������!\n"; // ����� "Hello, World !"
keep_window_open (); // �������� ����� �������
return 0;
}
