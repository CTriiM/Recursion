#include<iostream>
#include<conio.h>
using namespace std;
//#define ELEVATOR
void elevator(int floor);
int factorial(int n);
double power(double a, int m);
void Fibonachchi(int a, int n, int b);

int main()
{
	setlocale(LC_ALL, "");
	/*cout << "Hello";

	cout << "Для выхода нажмите Esc, для продолжения нажите любую клавишу" << endl;
	if (_getch() != 27)main();*/

	//int n;
	//cout << "Введите номер этажа: "; cin >> n;
	//elevator(n);

	//int n;
	//cout << "Введите число: "; cin >> n;
	////elevator(n);
	//factorial(n);

	int n;
	cout << "Введите число, факториал которого хотите вычислить: "; cin >> n;
	cout << factorial(n);
	cout << endl;


	//power
	int m;
	int a;
	cout << "Введите число, которое хотите возвести в степень: "; cin >> a;
	cout << "Введите степень числа: "; cin >> m;
	cout << power(a, m);
	cout << endl;



}
//------------------------------------------------------------
void elevator(int floor)
{

#ifdef ELEVATOR
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

#endif // ELEVATOR

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
	if (n == 0)return 1;
	else return a * power(a, n-1);
}

//-------------------------------------------------------------
void Fibonachchi(int a, int n, int b)
{
	if (n == 0)
	{
		cout << "0";
		return;

	}
	cout << a << "\t";
}
