// while4.cpp
// ���������� � ��������� ������� ����� �����
// #include "std_lib_facilities.h"
#include <iostream>
#include <iomanip>	// ��� setw
#include <clocale>
using namespace std;
int main () 		// ���r����� �� �++ ���������� � ���������� ������� main
{
  setlocale(LC_CTYPE, "rus"); // ����� ������� ��������� ������
  int pow = 1;			// ������ ���������� ����� ����� 1
  int numb = 1;			// 1 � 4 ������� ����� 1
  while(pow < 10000)		// ����, ���� � ������� �� ����� 4 ����
  {
  cout << setw(2) << numb; 			// ����� �����
  cout << setw(5) << pow << endl;   // � ��� 4-� �������
  ++numb;							// ��������� �������� �����
  pow = numb*numb*numb*numb;		// ���������� 4-� �������
  }
  cout << endl;
// keep_window_open (); // �������� ����� �������
  return 0;
}
