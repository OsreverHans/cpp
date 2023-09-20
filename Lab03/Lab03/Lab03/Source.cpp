#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");
	char _char[] = "char\n";
	int _int = 20;
	int negative_int = -10;
	double _double = 123.5467;
	float _float = 123.5467;
	float zero_float = 10;
	bool a = false;

	cout << "�������� � �������������\n";
	//������������� ������ ���� ������
	cout.width(10);
	//������������� ������ �����������(�� ��������� - ������)
	cout.fill('?');
	//���� �������������� ��� ������� ���� ����� ��������� �� ������ ����,
	//����� � �� �������. ���������� ����������� ��������� �����������
	cout.setf(ios::internal);
	cout << negative_int << endl;//������ ����� � ������ ������?
	
	//������������� ������ ���� ������
	cout.width(50); 
	//������������� ������ �����������(�� ��������� - ������)
	cout.fill('@');
	//����������� �� ������� ���� ����
	cout.setf(ios::right);
	cout << _char << endl;

	//P.S. ����� left, right � internal �� ����� ���� ����������� ������������.

   //======== ������� � ������ �������� ���������� ========\\

	cout << "������� � ������ �������� ����������\n";
	//������������ ������� ���������
	cout.flags(ios::oct);
	cout << _int << endl;

	//���������� ������� ���������
	cout.flags(ios::dec);
	cout << _int << endl;

	//����������������� ������� ���������
	cout.flags(ios::hex);
	cout << _int << endl;

	//������ ��������� ������� ��������� (8, 16, 10 ��� 0)
	//�� ��������� 0 - ��� ����������, ����� �������, ����� �������� 8- ���
	//16-������ �����. ����� � ������� ��������� 8
	cout << setbase(8) << _int << endl;

	//P.S. ����� dec, oct � hex �� ����� ���� ����������� ������������.

   //======== ������� ������������ ����� ========\\

	cout << "\n������� ������������ �����\n";
	//��� ������ ������������ ����� �������� ���������� ����� � ������� �����
	cout.flags(ios::showpoint);
	cout << zero_float << endl;

	//�������� ������������ ����� � ����� �������� � ��������
	cout << "\n������� ������������ ����� � ����� �������� � ��������\n";
	cout.flags(ios::scientific);
	cout << _double << endl;

	//�������� ������������ ����� � ����� � ������������� ������,
	//�������� ���������� ������� ���� � setprecision
	cout.flags(ios::fixed);
	cout << setprecision(2) << _double << endl;

	//P.S. ����� scientific � fixed �� ����� ���� ����������� ������������

   //======== �������� ����� ========\\

	cout << "\n�������� �����\n";
	//�������� ���� ��� ������ ������������� �����
	cout.flags(ios::showpos);

	cout << _int << endl;

	//??cout.flags(ios::noshowpos);

	if (_double == _float) // � long double ��������
		a = 1;
	cout.unsetf(ios::showpos);

	cout << a << endl;

	system("pause");
	return 0;


	//
}