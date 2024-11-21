#include <iostream>
#include <conio.h>
using namespace std;
enum etype {laborer, secretary, manager, accountant, executive, researcher};
int main() {
    
    etype pupa;
    cout << "Введите первую букву должности" << endl;
    cout << "(laborer, secretary, manager, accountant," << endl;
    cout << "executive, researcher):";
    char t = getchar();
    switch (t)
    {
    case 'l':
        pupa = laborer; break;
    case 's':
        pupa = secretary; break;
    case 'm':
        pupa = manager; break;
    case 'a':
        pupa = accountant; break;
    case 'e':
        pupa = executive; break;
    case 'r':
        pupa = researcher; break;
    default: cout << "No bearashens!" << endl;
    }
    cout << "Полное название должности: ";
    switch (pupa)
    {
    case 0:
        cout << "laborer" << endl; break;
    case 1:
        cout << "secretary" << endl; break;
    case 2:
        cout << "manager" << endl; break;
    case 3:
        cout << "accountant" << endl; break;
    case 4:
        cout << "executive" << endl; break;
    case 5:
        cout << "researcher" << endl; break;
    default: cout << "No bearashens!" << endl;
    } 
    return 0;
}