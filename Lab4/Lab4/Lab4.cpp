#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");
    int a = 0;
    int b = 0;
    int padding = 15;
    cout << "Лабораторная работа 4, вариант 10\n\n" << "Введите 2 целых числа через enter\n\n";

    cout << "a: "; // целые числа
    cin >> a;
    cout << "b: ";
    cin >> b;

    cout << string(padding * 3, ' ') << "Ширина поля равна 6\n";
    cout << string(padding, ' ') << "Вывод без формата:";
    cout << string(padding * 3, ' ') << "Вывод по формату:\n";

    cout << string(padding, ' ') << "a: " << a;
    cout << string(padding * 4, ' ') << "a: " << right << setw(6) << a << endl;

    cout << string(padding, ' ') << "b: " << b;
    cout << string(padding * 4, ' ') << "b: " << right << setw(6) << b << endl; // криво выводится если разное количество цифр

    return 0;
}