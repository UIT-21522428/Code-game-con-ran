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
}
