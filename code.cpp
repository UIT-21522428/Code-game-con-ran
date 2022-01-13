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


}
