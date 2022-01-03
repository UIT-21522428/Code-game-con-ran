void ve_dau_duoi()
{
	gotoxy(snake[0].x, snake[0].y);
	cout << THAN;
	gotoxy(duoi_truoc.x, duoi_truoc.y);
	cout << ' '; // Clear the old tail
}

bool can_ban_than()
{
	phan_than head = snake[0];
	for (size_t i = 1; i < snake.size(); i++)
		if (head.x == snake[i].x && head.y == snake[i].y)
			return true;
	return false;
}

