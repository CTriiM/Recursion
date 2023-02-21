#pragma once
#include"Constants.h"
#include"stdafx.h"
void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(char mas[], const int INDEX);
//двумерные
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS);