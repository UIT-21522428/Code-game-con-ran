Point prevTail;

void move()
{
	// lưu phần đuôi cũ lại
	prevTail = snake.back();
	// code gores here
}

void drawHeadnTail()
{
	gotoxy(snake[0].x, snake[0].y);
	cout << BODY;
 // vẽ phần đầu mới
	Point tail = snake.back();
	gotoxy(prevTail.x, prevTail.y);
	cout << ' '; // xóa phần đuôi cũ đi
}
