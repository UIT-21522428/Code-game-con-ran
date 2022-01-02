#include <iostream> 




//code o duoi 

struct phan_than
{
	int x;
	int y;
};
vector<phan_than> snake = {
	phan_than{ C_RONG / 2 + 2, C_CAO / 2 },
	phan_than{ C_RONG / 2 + 1, C_CAO / 2 },
	phan_than{ C_RONG / 2, C_CAO / 2 },
	phan_than{ C_RONG / 2 - 1, C_CAO / 2 },
	phan_than{ C_RONG / 2 - 2, C_CAO / 2 }
};


void ve_snake_phan(phan_than p)
{
	gotoxy(p.x, p.y);
	cout << THAN;
}
void ve_Snake()
{
	for (size_t i = 0; i < snake.size(); i++)
		ve_snake_phan(snake[i]);
}

