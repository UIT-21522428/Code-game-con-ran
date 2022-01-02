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
//can ban than
bool can_ban_than()
{
	phan_than head = snake[0];
	for (size_t i = 1; i < snake.size(); i++)
		if (head.x == snake[i].x && head.y == snake[i].y)
			return true;
	return false;
}

//them lai
move();
		
		if (can_ban_than())
		{
			break;
		}
		if (dung_tuong())
		{
			break;
		}
