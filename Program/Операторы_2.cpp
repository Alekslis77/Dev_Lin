#include "std_lib_facilities.h"
#include <windows.h> // ��� SetConsoleCP
int main() // ���r����� �� �++ ���������� � ���������� ������� main
{
SetConsoleCP(1251); // ��������� �������� � �������
SetConsoleOutputCP(1251); // ---------------------
cout << " ���������� , ������� ����� ����� ����� �������� ���� !!!!! : " ;
int n;
cin >> n;
double m=n;
cout << "n == " << n
	 << "\nn+1 == " << n+1
	 << "\n��� ���� �� n == " << 3*n
	 << "\n��� ���� �� n == " << n+n
	 << "\nn � �������� == " << n*n
	 << "\n�������� n == " << n/2
	 << "\n������������� ������� �� 3 = " << n/3
	 << "\n������� �� ������� �� 2 =" << n%2
	 << "\n������ ���������� �� n = " << sqrt(m)
	 << '\n'; // ������� �� ����� ������
keep_window_open ();
return 0;
}
