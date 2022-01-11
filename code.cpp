void ve_tuong_crush() //vẽ tường i luv u
{   //ngang
	for (size_t i = 0; i < C_RONG; i++)
		cout << '#';
	gotoxy(0, C_CAO);
	for (size_t i = 0; i < C_RONG; i++)
		cout << '#';
	//dọc chính
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
	//dọc phụ
	//I
    for (size_t i = 4; i < 9; i++)
	{
		gotoxy(2, i);
		cout << '#';
	}
	//tym
	for (size_t i = 5; i < 7; i++)
	{
		gotoxy(8, i);
		cout << '#';
	}
	for (size_t i = 4; i < 8; i++)
	{
		gotoxy(9, i);
		cout << '#';
	}
	for (size_t i = 5; i < 8; i++)
	{
		gotoxy(10, i);
		cout << '#';
	}
	for (size_t i = 6; i < 9; i++)
	{
		gotoxy(11, i);
		cout << '#';
	}
	for (size_t i = 5; i < 8; i++)
	{
		gotoxy(12, i);
		cout << '#';
	}
	for (size_t i = 4; i < 8; i++)
	{
		gotoxy(13, i);
		cout << '#';
	}
	for (size_t i = 5; i < 7; i++)
	{
		gotoxy(14, i);
		cout << '#';
	}
	//U
	for (size_t i = 4; i < 9; i++)
	{
		gotoxy(22, i);
		cout << '#';
	}
	for (size_t i = 4; i < 9; i++)
	{
		gotoxy(18, i);
		cout << '#';
	}
	//ngang 
    for (size_t i = 10; i < 14; i++)
		cout << '#';
	gotoxy(4, C_CAO);
}
bool dung_tuong_crush() //logic khi ran dung tuong
{
	return snake[0].x == 0 || snake[0].y == 0
	|| snake[0].x == C_RONG || snake[0].y == C_CAO
	|| (snake[0].x == 2 && 4 <= snake[0].y && snake[0].y <= 8)
	|| (snake[0].x == 8 && 5 <= snake[0].y && snake[0].y <= 6)
	|| (snake[0].x == 9 && 4 <= snake[0].y && snake[0].y <= 7)
	|| (snake[0].x == 10 && 5 <= snake[0].y && snake[0].y <= 8)
	|| (snake[0].x == 11 && 6 <= snake[0].y && snake[0].y <= 8)
	|| (snake[0].x == 12 && 5 <= snake[0].y && snake[0].y <= 8)
	|| (snake[0].x == 13 && 4 <= snake[0].y && snake[0].y <= 7)
	|| (snake[0].x == 14 && 5 <= snake[0].y && snake[0].y <= 6)
	|| (snake[0].x == 18 && 4 <= snake[0].y && snake[0].y <= 7)
	|| (snake[0].x == 22 || 4 <= snake[0].y && snake[0].y <= 7)
	|| (snake[0].y == 8 && 18 <= snake[0].x && snake[0].x <= 22)
	;
}
void tao_do_an_crush()
{
	srand(time(0));
	int x = rand() % (39) +1 ; //40  //(max - min ) +1
	int y = rand() % (9) + (9);   //max20
    do_an = {
		x,
		y,
	};
	gotoxy(x, y);
	cout << DO_AN;
}
