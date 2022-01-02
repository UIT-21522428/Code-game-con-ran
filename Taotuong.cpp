// Tao tuong

#include <iostream>
using namespace std;
#include <vector>
#include <windows.h>
#include <conio.h>
#include <cstring>
#include <time.h>
#include <random>
#define C_RONG 40
#define C_CAO 20
#define THAN '*'
#define DO_AN 'O'



void ve_tuong()
{
	for (size_t i = 0; i < C_RONG; i++)
		cout << '#';
	gotoxy(0, C_CAO);
	for (size_t i = 0; i < C_RONG; i++)
		cout << '#';
	for (size_t i = 1; i < C_CAO; i++)
	{
		gotoxy(0, i);
		cout << '#';
	}
	for (size_t i = 1; i < C_CAO; i++)
	{
		gotoxy(C_RONG, i);
		cout << '#';
	}
}
bool dung_tuong()
{
	return snake[0].x == 0 || snake[0].y == 0 || snake[0].x == C_RONG || snake[0].y == C_CAO;
}
