#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");
    int a = 0;
    int b = 0;
    int padding = 15;
    cout << "������������ ������ 4, ������� 10\n\n" << "������� 2 ����� ����� ����� enter\n\n";

    cout << "a: "; // ����� �����
    cin >> a;
    cout << "b: ";
    cin >> b;

    cout << string(padding * 3, ' ') << "������ ���� ����� 6\n";
    cout << string(padding, ' ') << "����� ��� �������:";
    cout << string(padding * 3, ' ') << "����� �� �������:\n";

    cout << string(padding, ' ') << "a: " << a;
    cout << string(padding * 4, ' ') << "a: " << right << setw(6) << a << endl;

    cout << string(padding, ' ') << "b: " << b;
    cout << string(padding * 4, ' ') << "b: " << right << setw(6) << b << endl; // ����� ��������� ���� ������ ���������� ����

    return 0;
}