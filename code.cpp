
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
