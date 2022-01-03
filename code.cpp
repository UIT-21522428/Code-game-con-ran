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
//tạo quả táo 
void tao_do_an()
{
	srand(time(0));
	int x = rand() % (C_RONG - 1) + 1;
	int y = rand() % (C_CAO - 1) + 1;
	do_an = {
		x,
		y,
	};
	gotoxy(x, y);
	cout << DO_AN;
}

//kiểm tra rắn có ăn không?
bool an_do_an()
{
	return snake[0].x == do_an.x && snake[0].y == do_an.y;
}
