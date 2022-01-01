//truong hop quay dau nguoc lai
if (ch == 'a' && direction != Direction::right)
	direction = Direction::left;
else if (ch == 'w' && direction != Direction::down)
	direction = Direction::up;
else if (ch == 's' && direction != Direction::up)
	direction = Direction::down;
else if (ch == 'd' && direction != Direction::left)
	direction = Direction::right;
else if (ch == 'q') // Thoat game
	break;
//dung tuong
bool isHitWall()
{
	return snake[0].x == 0 || snake[0].y == 0 || snake[0].x == WIDTH || snake[0].y == HEIGHT;
}
//can ban than
bool isBiteItself()
{
	Point head = snake[0];
	for (size_t i = 1; i < snake.size(); i++)
		if (head.x == snake[i].x && head.y == snake[i].y)
			return true;
	return false;
}
//them lai
move();
if (isBiteItself())
	break;
if (isHitWall())
	break;
drawSnake();
