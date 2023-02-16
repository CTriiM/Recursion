#include<iostream>
#include<conio.h>
using namespace std;

//#define ELEVATOR
//#define FACTORIAL
//#define POWER
#define FIBONACCI

void elevator(int floor);
int factorial(int n);
double power(double a, int m);
void Fibonacci(int n, int a=0, int b=1);

int main()
{
	setlocale(LC_ALL, "");
	/*cout << "Hello";

	cout << "Для выхода нажмите Esc, для продолжения нажите любую клавишу" << endl;
	if (_getch() != 27)main();*/

#ifdef ELEVATOR
	int n;
	cout << "Введите номер этажа: "; cin >> n;
	elevator(n);
#endif // ELEVATOR


#ifdef FACTORIAL
	int n;
	cout << "Введите число: "; cin >> n;
	factorial(n);
#endif // FACTORIAL


#ifdef FACTORIAL
	int n;
	cout << "Введите число, факториал которого хотите вычислить: "; cin >> n;
	cout << factorial(n);
	cout << endl;
#endif // FACTORIAL


#ifdef POWER
	int n;
	int a;
	cout << "Введите число, которое хотите возвести в степень: "; cin >> a;
	cout << "Введите степень числа: "; cin >> n;
	cout << power(a, n);
	cout << endl;
#endif // POWER



	int n;
	cout << "Введите предельное число:"; cin >> n;
	Fibonacci(n);
}
//------------------------------------------------------------
void elevator(int floor)
{
	if (floor == 0)
	{
		cout << "Вы в подвале" << endl;
		return;
	}
	if (floor == 3 or floor == 23 or floor == 33 or floor == 43)
	{
		cout << "Вы на " << floor << "-ем этаже\n";
	}
	else
		cout << "Вы на " << floor << "-ом этаже\n";
	elevator(floor - 1); //рекурсионный вызов функции
	if (floor == 3 or floor == 23 or floor == 33 or floor == 43)
	{
		cout << "Вы на " << floor << "-ем этаже\n";
	}
	else
		cout << "Вы на " << floor << "-ом этаже\n";

}

//------------------------------------------------------------
int factorial(int n)
{
	/*if (n == 0) return 1;
	else return n * factorial(n - 1);*/

	return n == 0 ? 1 : n * factorial(n - 1);

}
//факториал - это произведение ряда чисел от 1 до указанного включительно
//5! = 1*2*3*4*5=120;

//------------------------------------------------------------
double power(double a, int n)
{
	/*if (n == 0)return 1;
	else if (n > 0) return a * power(a, n - 1);
	else return 1 / a*power(a, n + 1);*/
	return n == 0 ? 1 : n > 0 ? a * power(a, n - 1) : /* 1 / a * power(a, n + 1)*/ 1 / power(a, -n); /*-n - меняем знак на противоположный чтобы а стала положительная*/
}


//-------------------------------------------------------------
//void Fibonachchi(int a, int n, int b)
//{
//	if (n == 0)
//	{
//		cout << "0";
//		return;
//
//	}
//	cout << a << "\t";
//}



void Fibonacci(int n, int a, int b)
{
	if (a > n)return;
	{
		cout << a << "\t";
	}
	Fibonacci(n, b, a + b);
}
