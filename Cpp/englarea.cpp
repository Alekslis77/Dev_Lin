// englarea.cpp
// использование вложенных структур
#include <iostream>
using namespace std;
//////////////////////////////////////////////////////
struct Distance // длины в английской системе
{
    int feet; // футы
    float inches;      // дюймы
};
//////////////////////////////////////////////////////
struct Room             // размеры прямоугольной комнаты
{
    Distance length;    // длина
    Distance width;     // ширина
};

//////////////////////////////////////////////////////
int main()
{
    Room dining;        // переменная
    dining.length.feet = 13; // задание параметров комнаты
    dining.length.inches = 6.5;
    dining.width.feet = 10;
    dining.width.inches = 0.0;
    // преобразование длины и ширины в вещественный формат
    float l = dining.length.feet + dining.length.inches/12;
    float w = dining.width.feet + dining.width.inches/12;
    // вычисление площади комнаты и вывод на экран
    cout << "Площадь комнаты равна " << l * w
    << " квадратных футов\n";
    return 0;
}