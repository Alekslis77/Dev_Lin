// fibo.cpp
// ������������� ����� ��������� � ������� ����� while
// #include "std_lib_facilities.h"
#include <iostream>
#include <clocale>
using namespace std;
int main () 		// ���r����� �� �++ ���������� � ���������� ������� main
{
setlocale(LC_CTYPE, "rus"); // ����� ������� ��������� ������
// ������� ���� unsigned long
const unsigned long limit = 4294967295;
unsigned long next = 0;		// ������������� ����  
unsigned long last = 1;		// ��������� ����
while(next < limit/2)		// ��������� �� ������ ���� ������� �������
  {
  cout << last << "  "; 	// ����� ���������� �����
  long sum = next + last;   // �������� ���� ��������� ������
  next = last;				// ���������� ��������������
  last = sum;				// � ���������� ������
  }
  cout << endl;
// keep_window_open (); // �������� ����� �������
  return 0;
}
