// ��� ���r����� ������� �� ����� ��������� "Hello, World !"
#include "std_lib_facilities.h"
#include <clocale>
int main () // ���r����� �� �++ ���������� � ���������� ������� main
{
setlocale(LC_CTYPE, "rus"); // ����� ������� ��������� ������
cout << "Hello, progrmming !\nHere we go !\n"; // ����� "Hello, World !"
keep_window_open (); // �������� ����� �������
return 0;
}
