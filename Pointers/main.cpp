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
	cout << a << endl;//����� �������� ���������� 'a' �� �����
	cout << &a << endl;//������ ������ ���������� � ����� ��� ������
	cout << pa << endl;//����� �� ����� ������ ���������� � ����������� � ��������� ��
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