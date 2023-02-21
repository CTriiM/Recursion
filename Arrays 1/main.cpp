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
	cout << "Сумма всех элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(arr, n) << endl;
	int min = minValueIn(arr, n);
	cout << "Минимальное значение: " << min << endl;
	int max = maxValueIn(arr, n);
	cout << "Максимальное значение: " << max << endl;
	cout << "Введите количество сдвигов влево: "; cin >> number_of_shifts;
	shiftLeft(arr, n, number_of_shifts);
	Print(arr, n);
	cout << "Введите количество сдвигов вправо: "; cin >> number_of_shifts;
	shiftRight(arr, n, number_of_shifts);
	Print(arr, n);


	const int SIZE = 8;
	double brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	Sorting(brr, SIZE);
	Print(brr, SIZE);
	cout << "Сумма элементов массива: " << Sum(brr, SIZE) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(brr, SIZE) << endl;
	cout << "Минимальное значение: " << minValueIn(brr, SIZE) << endl;
	cout << "Максимальное значение: " << maxValueIn(brr, SIZE) << endl;
	cout << "Введите количество сдвигов влево: "; cin >> number_of_shifts;
	shiftLeft(brr, SIZE, number_of_shifts);
	Print(brr, SIZE);
	cout << "Введите количество сдвигов вправо: "; cin >> number_of_shifts;
	shiftRight(brr, SIZE, number_of_shifts);
	Print(brr, SIZE);


	const int IDX = 15;
	char massiv[IDX];
	FillRand(massiv, IDX);
	Print(massiv, IDX);
	cout << "Сумма всех элементов массива: " << Sum(massiv, IDX) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(massiv, IDX) << endl;
	cout << "Минимальное значение: " << minValueIn(massiv, IDX) << endl;
	cout << "Максимальное значение: " << maxValueIn(massiv, IDX) << endl;
	cout << "Введите количество сдвигов влево: "; cin >> number_of_shifts;
	shiftLeft(massiv, IDX, number_of_shifts);
	Print(massiv, IDX);
	cout << "Введите количество сдвигов вправо: "; cin >> number_of_shifts;
	shiftRight(massiv, IDX, number_of_shifts);
	Print(massiv, IDX);
#endif // ARR_1


	//Для двумерных
	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Сумма всех элементов массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение: " << minValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение: " << maxValueIn(i_arr_2, ROWS, COLS) << endl;
	Sorting(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);

	double doub_brr_2[ROWS][COLS];
	FillRand(doub_brr_2, ROWS, COLS);
	Print(doub_brr_2, ROWS, COLS);
	cout << "Сумма всех элементов массива: " << Sum(doub_brr_2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(doub_brr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение: " << minValueIn(doub_brr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение: " << maxValueIn(doub_brr_2, ROWS, COLS) << endl;

	char ch_matr_2[ROWS][COLS];
	FillRand(ch_matr_2, ROWS, COLS);
	Print(ch_matr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(ch_matr_2, ROWS, COLS) << endl;
	cout << "Средне-арифметическое элементов массива: " << Avg(ch_matr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение: " << minValueIn(ch_matr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение: " << maxValueIn(ch_matr_2, ROWS, COLS) << endl;

}