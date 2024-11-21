// volumeRoom.cpp
// программа рассчитывающая объем комнаты
#include <iostream>
using namespace std;
//////////////////////////////////////////////////////
struct Distance // длины в английской системе
{
    int feet; // футы
    float inches; // дюймы
};
//////////////////////////////////////////////////////
struct Volume
{
    Distance lengthRoom; // длина комнаты
    Distance widthRoom; // ширина комнаты
    Distance heightRoom; // высота комнаты
};
/////////////////////////////////////////////////////
int main()
{
    Volume vRoom;
    vRoom.lengthRoom = {2, 2.5};
    vRoom.widthRoom = {12, 5.5};
    vRoom.heightRoom = {11, 1.2};
    //Distance d1, d3; // определение двух переменных
    //Distance d2 = {11, 6.25}; // определение с инициализацией
    // ввод полей переменной d1
    //cout << "\nВведите число футов: "; cin >> d1.feet;
    //cout << "\nВведите число дюймов: "; cin >> d1.inches;
    // сложение длин d1 и d2 и присвоение результата d3
    float V;
    V = ((vRoom.lengthRoom.feet * 12 + vRoom.lengthRoom.inches) 
    * (vRoom.widthRoom.feet * 12 + vRoom.widthRoom.inches) 
    * (vRoom.heightRoom.feet * 12 + vRoom.heightRoom.inches))/12; // объем комнаты
    //d3.feet = 0;                        // с возможным заемом
    //if(d3.inches >= 12.0)               // если сумма больше 12.0,
    //{                                   // то уменьшаем
    //    d3.inches -= 12.0;              // число дюймов на 12.0 и 
    //    d3.feet++;                      // увеличиваем число футов на 1
    //}
    //d3.feet += d1.feet + d2.feet; // сложение футов
    // вывод всех длин на 
    cout << "Объем комнаты равен: " << V/1000 << " кубических футов" << endl;
    //cout << d1.feet << "\'-" << d1.inches << "\" +";
    //cout << d2.feet << "\'-" << d2.inches << "\" =";
    //cout << d3.feet << "\'-" << d3.inches << "\"\n";
    return 0;
}