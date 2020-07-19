#include <iostream>
#include <Windows.h>
#include <ctime>
#include <algorithm>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	const int size = 200000; //100.000=11.608sec; 200.000=46.488sec - время за которое произведено подсчет по алгоритму (от "int begin = clock();" до "int end = clock();")
	int arr[size]{};
	cout << "Введите количество элементов: " << endl;
	int n;
	cin >> n;
	cout << "*** Случайные числа ***" << endl;
	srand(time(0));
	int a = -1000;
	int b = 1000;
	for (int i = 0; i < n; i++)
	{
		arr[i] = a + rand() % (b - a + 1);
		//cout << arr[i] << '\t';
	}
	cout << endl;

	int begin = clock(); // начало подсчета времени. При подсчете времени работы алгоритма нужно отключать все выводы.

	sort(arr, arr + n); // отсортировать быстро и в одну строку !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! (подключить библиотеку #include <algorithm>)

	int end = clock(); // конец подсчета времени
	cout << "time= " << (end - begin) / 1000.0 << endl; //вывод подсчета времени

	/*for (int i = 0; i < n; i++) //вывод
	{
		cout << arr[i] << '\t';
	}*/


	return 0;
}

/*SetConsoleOutputCP(1251);
	const int size = 200000; //100.000=11.608sec; 200.000=46.488sec - время за которое произведено подсчет по алгоритму (от "int begin = clock();" до "int end = clock();")
	int arr[size]{};
	cout << "Введите количество элементов: " << endl;
	int n;
	cin >> n;
	cout << "*** Случайные числа ***" << endl;
	srand(time(0));
	int a = -1000;
	int b = 1000;
	for (int i = 0; i < n; i++)
	{
		arr[i] = a + rand() % (b - a + 1);
		//cout << arr[i] << '\t';
	}
	cout << endl;

	int begin = clock(); // начало подсчета времени. При подсчете времени работы алгоритма нужно отключать все выводы.

	for (int i = 1; i < n; i++)
	{
		int temp = arr[i];
		int j = i;
		while (arr[j - 1] > temp && j > 0)
		{
			arr[j] = arr[j - 1];
			j--;
		}
		arr[j] = temp;
	}

	int end = clock(); // конец подсчета времени
	cout << "time= " << (end - begin) / 1000.0 << endl; //вывод подсчета времени

	/*for (int i = 0; i < n; i++) //вывод
	{
		cout << arr[i] << '\t';
	}*/


	//return 0; */

	//самый быстрый алгоритм сортировки от минимального до максимального:
	/*for (int i = 1; i < n; i++)
		{
			int temp = arr[i];
			int j = i;
			while (arr[j - 1] > temp && j > 0)
			{
				arr[j] = arr[j - 1];
				j--;
			}
			arr[j] = temp;
		}*/

		/*SetConsoleOutputCP(1251);
			const int size = 200000; //100.000=11.608sec; 200.000=46.488sec - время за которое произведено подсчет по алгоритму (от "int begin = clock();" до "int end = clock();")
			int arr[size]{};
			cout << "Введите количество элементов: " << endl;
			int n;
			cin >> n;
			cout << "*** Случайные числа ***" << endl;
			srand(time(0));
			int a = -1000;
			int b = 1000;
			for (int i = 0; i < n; i++)
			{
				arr[i] = a + rand() % (b - a + 1);
				//cout << arr[i] << '\t';
			}
			cout << endl;

			int begin = clock(); // начало подсчета времени
			/*bool f; int j = 0;
			do {
				f = false;
				for (int i = 0; i < n - 1 - j; i++)
					if (arr[i] > arr[i + 1])
					{
						swap(arr[i], arr[i + 1]);
						f = true;
					}
			} while (f);*/
			/*for (int j = 0; j < n - 1; j++)
			{
				int pmin = j;
				for (int i = j + 1; i < n; i++)
					if (arr[i] > arr[pmin]) pmin = i;
				int temp = arr[pmin];
				arr[pmin] = arr[j];
				arr[j] = temp;
			}*/

			//int end = clock(); // конец подсчета времени
			//cout << "time= " << (end - begin) / 1000.0 << endl; //вывод подсчета времени

			/*for (int i = 0; i < n; i++)
			{
				cout << arr[i] << '\t';
			}*/


			//return 0; */

			/*SetConsoleOutputCP(1251);
				const int size = 200000; //100.000=11.608sec; 200.000=46.488sec - время за которое произведено подсчет по алгоритму (от "int begin = clock();" до "int end = clock();")
				int arr[size]{};
				cout << "Введите количество элементов: " << endl;
				int n;
				cin >> n;
				cout << "*** Случайные числа ***" << endl;
				srand(time(0));
				int a = -1000;
				int b = 1000;
				for (int i = 0; i < n; i++)
				{
					arr[i] = a + rand() % (b - a + 1);
					//cout << arr[i] << '\t';
				}
				cout << endl;

				int begin = clock(); // начало подсчета времени

				for (int j = 0; j < n - 1; j++)
				{
					int pmin = j;
					for (int i = j + 1; i < n; i++)
						if (arr[i] > arr[pmin]) pmin = i;
					int temp = arr[pmin];
					arr[pmin] = arr[j];
					arr[j] = temp;
				}

				int end = clock(); // конец подсчета времени
				cout << "time= " << (end - begin) / 1000.0 << endl; //вывод подсчета времени*/



				/*
				//сортировка от максимального до минимального

				SetConsoleOutputCP(1251);
					const int size = 100;
					int arr[size]{};
					cout << "Введите количество элементов: " << endl;
					int n;
					cin >> n;
					cout << "*** Случайные числа ***" << endl;
					srand(time(0));
					int a = -1000;
					int b = 1000;
					for (int i = 0; i < n; i++)
					{
						arr[i] = a + rand() % (b - a + 1);
						cout << arr[i] << '\t';
					}
					cout << endl;
					for (int j = 0; j < n - 1; j++)
					{
						int pmin = j;
						for (int i = j + 1; i < n; i++)
							if (arr[i] > arr[pmin]) pmin = i;
						int temp = arr[pmin];
						arr[pmin] = arr[j];
						arr[j] = temp;
					}
					for (int i = 0; i < n; i++)
					{
						cout << arr[i] << '\t';
					}
					return 0;
				*/

				/*
				//сортировка от минимального до максимального
				SetConsoleOutputCP(1251);
					const int size = 100;
					int arr[size]{};
					cout << "Введите количество элементов: " << endl;
					int n;
					cin >> n;
					cout << "*** Случайные числа ***" << endl;
					srand(time(0));
					int a = -1000;
					int b = 1000;
					for (int i = 0; i < n; i++)
					{
						arr[i] = a + rand() % (b - a + 1);
						cout << arr[i] << '\t';
					}
					cout << endl;
					for (int j = 0; j < n - 1; j++)
					{
						int pmin = j;
						for (int i = j + 1; i < n; i++)
							if (arr[i] < arr[pmin]) pmin = i;
						int temp = arr[pmin];
						arr[pmin] = arr[j];
						arr[j] = temp;
					}

					for (int i = 0; i < n; i++)
					{
						cout << arr[i] << '\t';
					}
					return 0;
				*/