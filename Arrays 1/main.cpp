#include"stdafx.h"
#include"Constants.h"
#include"FillRand.h"
#include"Print.h"
#include"Sorting.h"
#include"Statistics.h"

#define ARR_1

void main()
{
	setlocale(LC_ALL, "");
#ifdef ARR_1
	const int n = 5;
	int arr[n];
	int number_of_shifts = 0;
	FillRand(arr, n);
	Print(arr, n);
	Sorting(arr, n);
	Print(arr, n);
	cout << "����� ���� ��������� �������: " << Sum(arr, n) << endl;
	cout << "������� �������������� ��������� �������: " << Avg(arr, n) << endl;
	int min = minValueIn(arr, n);
	cout << "����������� ��������: " << min << endl;
	int max = maxValueIn(arr, n);
	cout << "������������ ��������: " << max << endl;
	cout << "������� ���������� ������� �����: "; cin >> number_of_shifts;
	shiftLeft(arr, n, number_of_shifts);
	Print(arr, n);
	cout << "������� ���������� ������� ������: "; cin >> number_of_shifts;
	shiftRight(arr, n, number_of_shifts);
	Print(arr, n);


	const int SIZE = 8;
	double brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	Sorting(brr, SIZE);
	Print(brr, SIZE);
	cout << "����� ��������� �������: " << Sum(brr, SIZE) << endl;
	cout << "������� �������������� ��������� �������: " << Avg(brr, SIZE) << endl;
	cout << "����������� ��������: " << minValueIn(brr, SIZE) << endl;
	cout << "������������ ��������: " << maxValueIn(brr, SIZE) << endl;
	cout << "������� ���������� ������� �����: "; cin >> number_of_shifts;
	shiftLeft(brr, SIZE, number_of_shifts);
	Print(brr, SIZE);
	cout << "������� ���������� ������� ������: "; cin >> number_of_shifts;
	shiftRight(brr, SIZE, number_of_shifts);
	Print(brr, SIZE);


	const int IDX = 15;
	char massiv[IDX];
	FillRand(massiv, IDX);
	Print(massiv, IDX);
	cout << "����� ���� ��������� �������: " << Sum(massiv, IDX) << endl;
	cout << "������� �������������� ��������� �������: " << Avg(massiv, IDX) << endl;
	cout << "����������� ��������: " << minValueIn(massiv, IDX) << endl;
	cout << "������������ ��������: " << maxValueIn(massiv, IDX) << endl;
	cout << "������� ���������� ������� �����: "; cin >> number_of_shifts;
	shiftLeft(massiv, IDX, number_of_shifts);
	Print(massiv, IDX);
	cout << "������� ���������� ������� ������: "; cin >> number_of_shifts;
	shiftRight(massiv, IDX, number_of_shifts);
	Print(massiv, IDX);
#endif // ARR_1


	//��� ���������
	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "����� ���� ��������� �������: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "������� �������������� ��������� �������: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "����������� ��������: " << minValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "������������ ��������: " << maxValueIn(i_arr_2, ROWS, COLS) << endl;
	Sorting(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);

	double doub_brr_2[ROWS][COLS];
	FillRand(doub_brr_2, ROWS, COLS);
	Print(doub_brr_2, ROWS, COLS);
	cout << "����� ���� ��������� �������: " << Sum(doub_brr_2, ROWS, COLS) << endl;
	cout << "������� �������������� ��������� �������: " << Avg(doub_brr_2, ROWS, COLS) << endl;
	cout << "����������� ��������: " << minValueIn(doub_brr_2, ROWS, COLS) << endl;
	cout << "������������ ��������: " << maxValueIn(doub_brr_2, ROWS, COLS) << endl;

	char ch_matr_2[ROWS][COLS];
	FillRand(ch_matr_2, ROWS, COLS);
	Print(ch_matr_2, ROWS, COLS);
	cout << "����� ��������� �������: " << Sum(ch_matr_2, ROWS, COLS) << endl;
	cout << "������-�������������� ��������� �������: " << Avg(ch_matr_2, ROWS, COLS) << endl;
	cout << "����������� ��������: " << minValueIn(ch_matr_2, ROWS, COLS) << endl;
	cout << "������������ ��������: " << maxValueIn(ch_matr_2, ROWS, COLS) << endl;

}