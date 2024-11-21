// employee.cpp
// программа, запрашивающая данные о сотрудниках
#include <iostream>
using namespace std;
//////////////////////////////////////////////////////
struct Employee // объявление структуры
{
    int numberEmp;  // номер работника
    float paycheck; // величина пособия в долларах
};
//////////////////////////////////////////////////////
int main()
{
    Employee em1, em2, em3; // определение структурной переменной
    // запрос значений полей сотрудников
    cout << "Введите номер первого сотрудника и его пособие в долларах:" << endl;
    cin >> em1.numberEmp >> em1.paycheck;
    cout << "Введите номер второго сотрудника и его пособие в долларах:" << endl;
    cin >> em2.numberEmp >> em2.paycheck;
    cout << "Введите номер третьего сотрудника и его пособие в долларах:" << endl;
    cin >> em3.numberEmp >> em3.paycheck;
    // Вывод данных о всех сотрудниках
    cout << "Сотрудник номер " << em1.numberEmp << " пособие " << em1.paycheck << " $" << endl;
    cout << "Сотрудник номер " << em2.numberEmp << " пособие " << em2.paycheck << " $" << endl;
    cout << "Сотрудник номер " << em3.numberEmp << " пособие " << em3.paycheck << " $" << endl;
    return 0;
}