#pragma once
#include"Constants.h"
int Sum(int arr[], const int n);
double Sum(double arr[], const int n);
int Sum(char arr[], const int n);
//двумерные
int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS);
int Sum(char arr[ROWS][COLS], const int ROWS, const int COLS);
//----------------------------------------------------------------------
double Avg(int arr[], const int n);
double Avg(double arr[], const int n);
double Avg(char arr[], const int n);
//двумерные
double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg(char arr[ROWS][COLS], const int ROWS, const int COLS);
//----------------------------------------------------------------------
int minValueIn(int arr[], const int n);
double minValueIn(double arr[], const int n);
char minValueIn(char arr[], const int n);
//двумерные
int minValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);
double minValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS);
char minValueIn(char arr[ROWS][COLS], const int ROWS, const int COLS);
//----------------------------------------------------------------------
int maxValueIn(int arr[], const int n);
double maxValueIn(double arr[], const int n);
char maxValueIn(char arr[], const int n);
//двумерные
int maxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);
double maxValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS);
char maxValueIn(char arr[ROWS][COLS], const int ROWS, const int COLS);
//----------------------------------------------------------------------
void shiftLeft(int arr[], const int n, int number_of_shifts = 0);
void shiftRight(int arr[], const int n, int number_of_shifts = 0);
//void shiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts = 0);
//void shiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts = 0);
//----------------------------------------------------------------------
void shiftLeft(double arr[], const int n, int number_of_shifts = 0);
void shiftRight(double arr[], const int n, int number_of_shifts = 0);
//двумерные
//void shiftLeft(double arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts = 0);
//void shiftRight(double arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts = 0);
//----------------------------------------------------------------------
void shiftLeft(char arr[], const int n, int number_of_shifts = 0);
void shiftRight(char arr[], const int n, int number_of_shifts = 0);
//void shiftLeft(char arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts = 0);
//void shiftRight(char arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts = 0);