#include<iostream>
using namespace std;

//#define POINTERS_DASICS

void main()
{
	setlocale(0, "");

#ifdef POINTERS_DASICS
	//cout << "Hello Poiters" << endl;
	int a = 2;
	int* pa = &a;
	cout << a << endl;//Вывод значения переменной 'a' на экран
	cout << &a << endl;//взятие адреса переменной а прямо при выводе
	cout << pa << endl;//Вывод на экран адреса переменной а хранящегося в указателе ра
	cout <<* pa << endl;
///////////////////////////////////////////////////
#endif

	const int n = 5;
	int arr[n] = { 3,5,8,13,21 };
	cout << arr << endl;
	cout << *arr << endl << endl;;
	for (int i = 0; i < n; i++)
	{
		cout << *(arr +i)<< "\t";
	}
	cout << endl;
}