#include "std_lib_facilities.h"
#include <windows.h> // ��� SetConsoleCP
int main() // ���r����� �� �++ ���������� � ���������� ������� main
{
SetConsoleCP(1251); // ��������� �������� � �������
SetConsoleOutputCP(1251); // ---------------------
cout << " ���������� , ������� �������� � ��������� ������ : " ;
double n;
cin >> n;
cout << "n == " << n
	 << "\nn+1 == " << n+1
	 << "\n��� ���� �� n == " << 3*n
	 << "\n��� ���� �� n == " << n+n
	 << "\nn � �������� == " << n*n
	 << "\n�������� n == " << n/2
	 << "\n������ ���������� �� n = " << sqrt(n)
	 << '\n'; // ������� �� ����� ������
keep_window_open ();
return 0;
}
