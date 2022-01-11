void ve_dau_duoi()
{
	gotoxy(snake[0].x, snake[0].y);
	cout << THAN;
	gotoxy(duoi_truoc.x, duoi_truoc.y);
	cout << ' '; // Clear the old tail
}
void map_ra()
{
    snake.push_back(duoi_truoc);
}
