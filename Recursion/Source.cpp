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

	cout << "��� ������ ������� Esc, ��� ����������� ������ ����� �������" << endl;
	if (_getch() != 27)main();*/

	//int n;
	//cout << "������� ����� �����: "; cin >> n;
	//elevator(n);

	//int n;
	//cout << "������� �����: "; cin >> n;
	////elevator(n);
	//factorial(n);

	int n;
	cout << "������� �����, ��������� �������� ������ ���������: "; cin >> n;
	cout << factorial(n);
	cout << endl;


	//power
	int m;
	int a;
	cout << "������� �����, ������� ������ �������� � �������: "; cin >> a;
	cout << "������� ������� �����: "; cin >> m;
	cout << power(a, m);
	cout << endl;



}
//------------------------------------------------------------
void elevator(int floor)
{

#ifdef ELEVATOR
	if (floor == 0)
	{
		cout << "�� � �������" << endl;
		return;
	}
	if (floor == 3 or floor == 23 or floor == 33 or floor == 43)
	{
		cout << "�� �� " << floor << "-�� �����\n";
	}
	else
		cout << "�� �� " << floor << "-�� �����\n";
	elevator(floor - 1); //������������ ����� �������
	if (floor == 3 or floor == 23 or floor == 33 or floor == 43)
	{
		cout << "�� �� " << floor << "-�� �����\n";
	}
	else
		cout << "�� �� " << floor << "-�� �����\n";

#endif // ELEVATOR

}

//------------------------------------------------------------
int factorial(int n)
{
	/*if (n == 0) return 1;
	else return n * factorial(n - 1);*/

	return n == 0 ? 1 : n * factorial(n - 1);

}
//��������� - ��� ������������ ���� ����� �� 1 �� ���������� ������������
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
