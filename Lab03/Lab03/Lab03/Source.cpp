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

	cout << "Работаем с выравниванием\n";
	//устанавливаем ширину поля вывода
	cout.width(10);
	//устанавливаем символ заполнитель(по умолчанию - пробел)
	cout.fill('?');
	//флаг форматирования при котором знак числа выводится по левому краю,
	//число — по правому. Промежуток заполняется символами заполнителя
	cout.setf(ios::internal);
	cout << negative_int << endl;//Почему минус в начале строки?
	
	//устанавливаем ширину поля вывода
	cout.width(50); 
	//устанавливаем символ заполнитель(по умолчанию - пробел)
	cout.fill('@');
	//выравниваем по правому краю поля
	cout.setf(ios::right);
	cout << _char << endl;

	//P.S. флаги left, right и internal не могут быть установлены одновременно.

   //======== выводим в разных системах исчисления ========\\

	cout << "Выводим в разных системах исчисления\n";
	//восьмеричная система счисления
	cout.flags(ios::oct);
	cout << _int << endl;

	//десятичная система счисления
	cout.flags(ios::dec);
	cout << _int << endl;

	//шестнадцатеричная система счисления
	cout.flags(ios::hex);
	cout << _int << endl;

	//задаем основание системы счисления (8, 16, 10 или 0)
	//по умолчанию 0 - это десятичное, кроме случаев, когда вводятся 8- или
	//16-ричные числа. Здесь к примеру основание 8
	cout << setbase(8) << _int << endl;

	//P.S. флаги dec, oct и hex не могут быть установлены одновременно.

   //======== выводим вещественные чисел ========\\

	cout << "\nВыводим вещественные числа\n";
	//при выводе вещественных чисел печатаем десятичную точку и дробную часть
	cout.flags(ios::showpoint);
	cout << zero_float << endl;

	//печатаем вещественные числа в форме мантиссы с порядком
	cout << "\nВыводим вещественные числа в форме мантиссы с порядком\n";
	cout.flags(ios::scientific);
	cout << _double << endl;

	//Печатаем вещественные числа в форме с фиксированной точкой,
	//точность определяем строкой ниже в setprecision
	cout.flags(ios::fixed);
	cout << setprecision(2) << _double << endl;

	//P.S. флаги scientific и fixed не могут быть установлены одновременно

   //======== печатаем знаки ========\\

	cout << "\nПечатаем знаки\n";
	//печатаем знак при выводе положительных чисел
	cout.flags(ios::showpos);

	cout << _int << endl;

	//??cout.flags(ios::noshowpos);

	if (_double == _float) // с long double работало
		a = 1;
	cout.unsetf(ios::showpos);

	cout << a << endl;

	system("pause");
	return 0;


	//
}