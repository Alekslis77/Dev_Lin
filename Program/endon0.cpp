// endon0/cpp
// ���������� ����� WHILE
// #include "std_lib_facilities.h"
#include <iostream>
#include <clocale>
using namespace std;
int main () // ���r����� �� �++ ���������� � ���������� ������� main
{
  setlocale(LC_CTYPE, "rus"); // ����� ������� ��������� ������
  int n=99;			// n �������� ���� ����� 0 ����� ������� �����
  while(n!=0)		// ����, ���� �������� n �� ����� 0
  cin >> n;			// ���������� n c rkfdbfnehs
  cout << "Hello, World"; // ����� "Hello, World !"
  cout << endl;
// keep_window_open (); // �������� ����� �������
  return 0;
}
