// divdo.cpp
// ���������� ����� do
// #include "std_lib_facilities.h"
#include <iostream>
#include <clocale>
using namespace std;
int main () 		// ���r����� �� �++ ���������� � ���������� ������� main
{
setlocale(LC_CTYPE, "rus"); // ����� ������� ��������� ������
long dividend, divisor;
char ch;  
  do							// ������ �����
  {								// ��������
  cout << "������� �������:  " ; cin >> dividend;
  cout << "������� ��������:  " ; cin >> divisor;
  cout << "������� �����  " << dividend / divisor;
  cout << ", ������� �����  " << dividend % divisor;
  cout << "\n��� ���? (y/n):  ";
  cin >> ch;
  }
  while(ch != 'n');		// ������� �����
// keep_window_open (); 
  return 0;
}
