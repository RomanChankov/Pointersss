#include<iostream>
using namespace std;


void main()
{
	setlocale(0, "");

		int m;
		cout << "Enter the size of the array: " << endl;
		cin >> m;
		int* a = new int[m];

		for (int i = 0; i < m; i++)
		{
			a[i]=rand()%100;
			cout << a[i] << "	";
		}
		
		cout << endl;
	
	    while (true)
	    {
	        int n;
	        cout << "\nMenu:" << endl;
	        cout << "1 - Remove even values of an array" << endl;//Удаление четных значений массива
	        cout << "2 - Remove odd values of an array" << endl;//Удаление нечетных значений массива
	        cout << "3 - Show the current array" << endl;//Показать текущий массив
	        cout << "4 - Exit" << endl;
	        cin >> n;
	        cout<< endl;
	        switch (n)
	        {
	        case 1:
	           
	        {
	            for (int i = 0; i < m; i++)
	            {
	                if (a[i] % 2 == 0)
	                {
	                    cout << a[i] << "" << endl;
	                }
	            }
	        
	        } 
	        break;
	        
	
	        case 2:
	        {
	            for (int i = 0; i < m; i++)
	            {
	                if (!(a[i] % 2 == 0))
	                {
	                    cout << a[i] << " " << endl;
	                }
	            }
	        } break;
	        case 3:
	        {
	            cout << "Array: ";
	            for (int i = 0; i < m; i++)
	            {
	                cout << a[i] << " ";
	            }
	        } break;
	
	        case 4:
	        {
	            delete[] a;
				exit(0);
	            
	        } break;
	        default:
	        {
	            cout << "\nError. Please enter the correct number" << endl; //Введите правильный номер.
	        }
	        }
	    }
	}