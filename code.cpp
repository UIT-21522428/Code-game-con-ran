struct Point
{
	int x;
	int y;
};

vector<Point> snake = {
	Point{ WIDTH / 2 + 2, HEIGHT / 2 },
	Point{ WIDTH / 2 + 1, HEIGHT / 2 },
	Point{ WIDTH / 2, HEIGHT / 2 },
	Point{ WIDTH / 2 - 1, HEIGHT / 2 },
	Point{ WIDTH / 2 - 2, HEIGHT / 2 }
};


void drawSnakePart(Point p)
{
	gotoxy(p.x, p.y);
	// BODY là ký tự đại diện cho phần thân của con rắn
	cout << BODY;
}

void drawSnake()
{
	for (size_t i = 0; i < snake.size(); i++)
		drawSnakePart(snake[i]);
}