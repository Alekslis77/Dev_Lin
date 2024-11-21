// width1.cpp
// демонстрирует необходимость применения манипулятора setw
#include <iostream>
#include <iomanip> // для использования setw
using namespace std;
int main()
{
    cout << "До использования манипулятора setw" << endl;
    long pop1 = 4789426, pop2 = 274124, pop3 = 9761;    
    cout << "Город     " << "Нас." << endl
    << "Москва " << pop1 << endl
    << "Киров " << pop2 << endl
    << "Угрюмовка " << pop3 << endl;
    cout << "---------------------" << endl;
    cout << "После использования манипулятора setw" << endl;
    pop1 = 8425785, pop2 = 47;    
    cout << setw(9) << "Город    " << setw(12) << "   Население" << endl
    << setw(9) << "Москва   " << setw(12) << pop1 << endl
    << setw(9) << "Киров    " << setw(12) << pop2 << endl
    << setw(9) << "Угрюмовка" << setw(12) << pop3 << endl;
    return 0;
}