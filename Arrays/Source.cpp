#include<iostream>
using namespace std;

#define tab "\t"

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);

void Print(int arr[], const int n);
void Print(double arr[], const int n);

void Sorting(int arr[], const int n);
void Sorting(double arr[], const int n);

int Sum(int arr[], const int n);
double Sum(double arr[], const int n);

double Avg (int arr[], const int n);
double Avg (double arr[], const int n);

int minValueIn(int arr[], const int in);
double minValueIn(double arr[], const int in);

int maxValueIn(int arr[], const int in);
double maxValueIn(double arr[], const int in);

void shiftLeft(int arr[], const int n, int number_of_shifts = 0);
void shiftRight(int arr[], const int n, int number_of_shifts = 0);




void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	Sorting(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(arr, n) << endl;
	


	const int SIZE = 8;
	double brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	Sorting(brr, SIZE);
	Print(brr, SIZE);
	cout << "Сумма элементов массива: " << Sum(brr, SIZE) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(brr, SIZE) << endl;





	/*const int k = 10;
	int arr[k];
	FillRand(arr, k);
	Print(arr, k);
	cout << "Элементы которые повторяются: ";
	for(int i=0; i<k;i++)
	{
		for (int j = 1 + 1; j < n - 1; j++)
		{
			if (arr[i] == arr[j])
			{
				cout << arr[i] << tab;
			}
		}
	}*/
	

	
}

void FillRand(int arr[], const int n)
{
		//Заполнение массива случайными числами
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10000;
		arr[i] /= 100;
	}
}

void Print(int arr[], const int n)
{
	//Вывод массива на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Print(double arr[], const int n)
{
	//Вывод массива на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}

void Sorting(int arr[], const int n)
{
	//Сортировка массива
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}

}
void Sorting(double arr[], const int n)
{
	//Сортировка массива
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}

}

int Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Sum(double arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

double Avg(double arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
double Avg(int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}

int minValue(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}


