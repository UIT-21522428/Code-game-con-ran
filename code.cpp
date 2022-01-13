
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
	int y = rand() % (5) + (13);  

	
}


//kiểm tra rắn có ăn không?
bool an_do_an()
{
	return snake[0].x == do_an.x && snake[0].y == do_an.y;
}
