#include <iostream> 




//code o duoi 
//dichuyen
enum class HUONG
{
	len,
	phai,
	xuong,
	trai
};
//ve ran
struct phan_than
{
	int x;
	int y;
};
vector<phan_than> snake = {
	phan_than{ C_RONG / 2 + 2, C_CAO / 2 },
	phan_than{ C_RONG / 2 + 1, C_CAO / 2 },
	phan_than{ C_RONG / 2, C_CAO / 2 },
	phan_than{ C_RONG / 2 - 1, C_CAO / 2 },
	phan_than{ C_RONG / 2 - 2, C_CAO / 2 }
};
void ve_snake_phan(phan_than p)
{
	gotoxy(p.x, p.y);
	cout << THAN;
}

void ve_Snake()
{
	for (size_t i = 0; i < snake.size(); i++)
		ve_snake_phan(snake[i]);
}

//di chuyen
void move()
{
	duoi_truoc = snake.back();
	for (size_t i = snake.size() - 1; i > 0; i--)
		snake[i] = snake[i - 1];
	if (huong == HUONG::len)
		snake[0].y -= 1;
	else if (huong == HUONG::xuong)
		snake[0].y += 1;
	else if (huong == HUONG::trai)
		snake[0].x -= 1;
	else if (huong == HUONG::phai)
		snake[0].x += 1;
}
//phien ban crush
while (true)
	{
		if (_kbhit())
		{
			char ch = _getch();
			ch = tolower(ch);
			if (ch == 'a' && huong != HUONG::phai)
				huong = HUONG::trai;
			else if (ch == 'w' && huong != HUONG::xuong)
				huong = HUONG::len;
			else if (ch == 's' && huong != HUONG::len)
				huong = HUONG::xuong;
			else if (ch == 'd' && huong != HUONG::trai)
				huong = HUONG::phai;
			else if (ch == 'q')
			{
				menu_ket_thuc_crush();
				break;
			}
		}
		move();
		ve_dau_duoi();
//phien ban thuong
while (true)
	{
		if (_kbhit())
		{
			char ch = _getch();
			ch = tolower(ch);
			if (ch == 'a' && huong != HUONG::phai)
				huong = HUONG::trai;
			else if (ch == 'w' && huong != HUONG::xuong)
				huong = HUONG::len;
			else if (ch == 's' && huong != HUONG::len)
				huong = HUONG::xuong;
			else if (ch == 'd' && huong != HUONG::trai)
				huong = HUONG::phai;
			else if (ch == 'q')
			{
				menu_ket_thuc();
				break;
			}
		}
		move();
		ve_dau_duoi();

