//Khai bao thu vien
#include <iostream>
using namespace std;
#include <vector>
#include <windows.h>
#include <conio.h>
#include <cstring>
#include <time.h>
#include <random>
#define C_RONG 40
#define C_CAO 20
#define THAN '='
#define DO_AN '0'
//Huong va di chuyen
enum class HUONG
{
	len,
	phai,
	xuong,
	trai
};
//ve ran
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
HUONG huong = HUONG::phai;
phan_than do_an;
int diem = 0;
int toc_do = 300;
phan_than duoi_truoc;

void ve_snake_phan(phan_than);
void ve_Snake();
void gotoxy(int, int);
void ShowConsoleCursor(bool);
void move();
void ve_tuong();
void ve_tuong_crush();
bool dung_tuong();
bool dung_tuong_crush();
bool can_ban_than();
void ve_dau_duoi();
void tao_do_an();
void tao_do_an_crush();
bool an_do_an();
void map_ra();
void hien_diem();
void menu_ket_thuc();
void menu_ket_thuc_crush();
void bat_dau_game();
void bat_dau_game_crush();
void khoi_tao_lai_snake();
void menu_bat_dau();

int main()
{
    menu_bat_dau();
    return 0;
} 
//tuong
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

//tuong map 2
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
//dung tuong
bool dung_tuong()
{
	return snake[0].x == 0 || snake[0].y == 0 || snake[0].x == C_RONG || snake[0].y == C_CAO;
}
bool dung_tuong_crush() //logic khi ran dung tuong o map 2
{
	return snake[0].x == 0 || snake[0].y == 0
	|| snake[0].x == C_RONG || snake[0].y == C_CAO
	|| (snake[0].x == 2 && 4 <= snake[0].y && snake[0].y <= 8)
	|| (snake[0].x == 8 && 5 <= snake[0].y && snake[0].y <= 6)
	|| (snake[0].x == 9 && 4 <= snake[0].y && snake[0].y <= 7)
	|| (snake[0].x == 10 && 5 <= snake[0].y && snake[0].y <= 8)
	|| (snake[0].x == 11 && 6 <= snake[0].y && snake[0].y <= 8)
	|| (snake[0].x == 12 && 5 <= snake[0].y && snake[0].y <= 8)
	|| (snake[0].x == 13 && 4 <= snake[0].y && snake[0].y <= 7)
	|| (snake[0].x == 14 && 5 <= snake[0].y && snake[0].y <= 6)
	|| (snake[0].x == 18 && 4 <= snake[0].y && snake[0].y <= 7)
	|| (snake[0].x == 22 && 4 <= snake[0].y && snake[0].y <= 7)
	|| (snake[0].y == 8 && 18 <= snake[0].x && snake[0].x <= 22)
	;
}
//tao do an
void tao_do_an()
{
		srand(time(0));
		int x = rand() % (C_RONG - 1) + 1;
		int y = rand() % (C_CAO - 1) + 1;
	do_an = {
		x,
		y,
	};
	gotoxy(x, y);
	cout << DO_AN;

}
void tao_do_an_crush()
{
	srand(time(0));
	int x = rand() % (C_RONG-1) + 1; //40  //(max - min ) +1
	int y = rand() % (9) + (9);   //max20
	do_an = {
		x,
		y,
	};
	gotoxy(x, y);
	cout << DO_AN;
}
//kiem tra ran an qua
bool an_do_an()
{
	return snake[0].x == do_an.x && snake[0].y == do_an.y;
}
void hien_diem()
{
    gotoxy(C_RONG + 5, 2);
    cout << "Diem cua ban: " << diem;
}
//menu ket thuc
void menu_ket_thuc()
{
    system("cls");
    gotoxy(0, 0);
    cout << "Tro choi ket thuc" << endl;
    cout << "Diem cua ban " << diem << endl;
    cout << "Muon choi lai khong ne?([c]/[k]): ";
    char lua_chon;
    cin >> lua_chon;
    lua_chon = tolower(lua_chon);
    if (lua_chon == 'c')
    {
        khoi_tao_lai_snake();
        bat_dau_game();
    }
    else if (lua_chon == 'k')
        exit(1);
}
void menu_ket_thuc_crush()
{
    system("cls");
    gotoxy(0, 0);
    cout << "Tro choi ket thuc" << endl;
    cout << "Diem cua ban " << diem << endl;
    cout << "Muon choi lai khong ne?([c]/[k]): ";
    char lua_chon;
    cin >> lua_chon;
    lua_chon = tolower(lua_chon);
    if (lua_chon == 'c')
    {
        khoi_tao_lai_snake();
        bat_dau_game_crush();
    }
    else if (lua_chon == 'k')
        exit(1);
}
//bat dau game
void bat_dau_game()
{
	system("cls");
	ShowConsoleCursor(false);

	ve_tuong();
	ve_Snake();
	tao_do_an();
	hien_diem();

	while (true)
	{
		if (_kbhit())
		{
			char ch = _getch();
			ch = tolower(ch);
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
				menu_ket_thuc();
				break;
			}
		}
		move();
		ve_dau_duoi();
		if (an_do_an())
		{
			diem++;
			hien_diem();
			map_ra();
			tao_do_an();
		}
		if (can_ban_than())
		{
			ShowConsoleCursor(true);
			menu_ket_thuc();
			break;
		}
		if (dung_tuong())
		{
			ShowConsoleCursor(true);
			menu_ket_thuc();
			break;
		}
		Sleep(toc_do);
	}
}
//batdaugamemap2
void bat_dau_game_crush()
{
	system("cls");
	ShowConsoleCursor(false);

	ve_tuong_crush();
	ve_Snake();
	tao_do_an_crush();
	hien_diem();
	while (true)
	{
		if (_kbhit())
		{
			char ch = _getch();
			ch = tolower(ch);
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
				menu_ket_thuc_crush();
				break;
			}
		}
		move();
		ve_dau_duoi();
		if (an_do_an())
		{
			diem++;
			hien_diem();
			map_ra();
			tao_do_an_crush();
		}
		if (can_ban_than())
		{
			ShowConsoleCursor(true);
			menu_ket_thuc();
			break;
		}
		if (dung_tuong_crush())
		{
			ShowConsoleCursor(true);
			menu_ket_thuc_crush();
			break;
		}
		Sleep(toc_do);
	}
}
//khoi tao lai snake

void khoi_tao_lai_snake()
{
    diem = 0;
    huong = HUONG::phai;
    snake = {
        phan_than{ C_RONG / 2 + 2, C_CAO / 2 },
        phan_than{ C_RONG / 2 + 1, C_CAO / 2 },
        phan_than{ C_RONG / 2, C_CAO / 2 },
        phan_than{ C_RONG / 2 - 1, C_CAO / 2 },
        phan_than{ C_RONG / 2 - 2, C_CAO / 2 }
    };
}

// Menu Bat dau

void menu_bat_dau()
{
	system("cls");
	cout << "Chao mung toi game ran san moi (*^v^*)" << endl;
	cout << "Cac lua chon: " << endl;
	cout << "1. Bat dau" << endl;
	cout << "2. Thoat" << endl;
	cout << "Ban chon gi naooo: ";
	int lua_chon;
	cin >> lua_chon;
	while (lua_chon>2||lua_chon<1)
        {
            cout<<"Ban nhap sai uii, nhap lai nha OwO";
            cout << "\nCac lua chon: " << endl;
            cout << "\n1. Bat dau" << endl;
            cout << "\n2. Thoat" << endl;
            cout << "\nBan chon gi naooo: ";
            cin >> lua_chon;
        }
	if (lua_chon == 1)
	{   system("cls");
	    cout<<"Chon ban do nao ban oi ^^: \n1. Map co dien \n2. Map yeu doi <3\nNhap so vo day nha: ";
		cout <<"\nBan chon map nao neee:  ";
		int mapping;
        cin >> mapping;
		if (mapping == 1)
        {
		system("cls");
		cout<<"Cac level toc do hien co: 1- Em be; 2- Hoc sinh; 3- Chay bo; 4- May bay; 5- Tau vu tru";
		cout << "\nChon level cho con ran(1 - 5): ";
		int t;
		cin >> t;
        while (t>5||t<1)
        {
            cout<<"Ban nhap sai uii, nhap lai nha OwO";
            cout <<"\nChon level cho con rang(1 - 5): ";
            cin >> t;
        }
		toc_do = 600 - t * 100;
		system("cls");

		cout << "Mach nho ne, khi choi bam \"q\" de thoat game nhaaa";
		gotoxy(0, 3);
		cout << "Bat dau!";
		Sleep(1000);
		for (size_t i = 3; i > 0; i--)
		{
			gotoxy(0, 3);
			cout << i << "         ";
			Sleep(1000);
		}
		gotoxy(0, 3);
		cout << "San moi thuiiii!";
		Sleep(1000);
		bat_dau_game();
        }
        if (mapping == 2)
        {
		system("cls");
		cout<<"Cac level toc do hien co: 1- Em be; 2- Hoc sinh; 3- Chay bo; 4- May bay; 5- Tau vu tru";
		cout << "\nChon level cho con ran(1 - 5): ";
		int t;
		cin >> t;
        while (t>5||t<1)
        {
            cout<<"Ban nhap sai uii, nhap lai nha OwO";
            cout <<"\nChon level cho con rang(1 - 5): ";
            cin >> t;
        }
		toc_do = 600 - t * 100; // tinh toc do
		system("cls");

		cout << "Mach nho ne, khi choi bam \"q\" de thoat game nhaaa";
		gotoxy(0, 3);
		cout << "Bat dau!";
		Sleep(1000);
		for (size_t i = 3; i > 0; i--)
		{
			gotoxy(0, 3);
			cout << i << "         ";
			Sleep(1000);
		}
		gotoxy(0, 3);
		cout << "San moi thuiiii!";
		Sleep(1000);
		bat_dau_game_crush();
        }
        }
	else if (lua_chon == 2)
		exit(1);
}


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

//di chuyen
void move()
{
	duoi_truoc = snake.back();
	for (size_t i = snake.size() - 1; i > 0; i--)
		snake[i] = snake[i - 1];
	if (huong == HUONG::len)
		snake[0].y -= 1;
	else if (huong == HUONG::xuong)
		snake[0].y += 1;
	else if (huong == HUONG::trai)
		snake[0].x -= 1;
	else if (huong == HUONG::phai)
		snake[0].x += 1;
}



void ve_dau_duoi()
{
	gotoxy(snake[0].x, snake[0].y);
	cout << THAN;
	gotoxy(duoi_truoc.x, duoi_truoc.y);
	cout << ' '; // Xoa duoi
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

//ran map ra
void map_ra()
{
	snake.push_back(duoi_truoc);
}

void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(
		GetStdHandle(STD_OUTPUT_HANDLE),
		coord
	);
}

void ShowConsoleCursor(bool showFlag)
{
	HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cursorInfo;
	GetConsoleCursorInfo(out, &cursorInfo);
	cursorInfo.bVisible = showFlag;
	SetConsoleCursorInfo(out, &cursorInfo);
}		
