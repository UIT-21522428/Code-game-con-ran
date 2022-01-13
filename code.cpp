// Tao tuong



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
=======
//tường map 2
void ve_tuong_crush()
{   //ngang
    for (size_t i = 0; i < C_RONG; i++)
		cout << '#';
	gotoxy(0, C_CAO);
	for (size_t i = 0; i < C_RONG; i++)
		cout << '#';
	//doc
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
	//doc tu che
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
	//ngang tu che
    for (size_t i = 10; i < 14; i++)
		cout << '#';
	gotoxy(4, C_CAO);



void move()
{
	duoi_truoc = snake.back();
}
void ve_dau_duoi()
{
	gotoxy(snake[0].x, snake[0].y);
	cout << THAN;
	gotoxy(duoi_truoc.x, duoi_truoc.y);
	cout << ' '; // Clear the old tail
=======

//truong hop quay dau nguoc lai
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
				
				break;
			}
		}
//dung tuong
bool dung_tuong()
{
	return snake[0].x == 0 || snake[0].y == 0 || snake[0].x == C_RONG || snake[0].y == C_CAO;
}
bool dung_tuong_crush() //logic khi ran dung tuong o map 2
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
//can ban than
bool can_ban_than()
{
	phan_than head = snake[0];
	for (size_t i = 1; i < snake.size(); i++)
		if (head.x == snake[i].x && head.y == snake[i].y)
			return true;
	return false;
=======

//tạo quả táo 
//bản đồ thường
void tao_do_an()
{
	srand(time(0));// hàm random
	int x = rand() % (C_RONG - 1) + 1;
	int y = rand() % (C_CAO - 1) + 1;
	do_an = {
		x,
		y,
	};
	gotoxy(x, y);
	cout << DO_AN;
}
//bản đồ crush 
void tao_do_an_crush()
{
	srand(time(0));
	int x = rand() % (C_RONG -1) + 1; 
	int y = rand() % (9) + (9);  
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
//rắn dài ra khi ăn 
void map_ra()
{
	snake.push_back(duoi_truoc);


}
