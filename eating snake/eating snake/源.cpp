#include<easyx.h>
#include<deque>
#include<conio.h>
#define WIDTH 640
#define LENGTH 480
#define SIZE 20
#define delay 100
//设置贪吃蛇的基本类
enum Direction{
	UP,
	DOWM,
	LEFT,
	RIGHT,
};
struct Snake {
	int x;
	int y;
	Direction  dir;
};
struct Food {
	int x;
	int y;
};
void drawSnake(std::deque<Snake>& snake) {
	setfillcolor(GREEN);
	for (const auto& body : snake) {
		fillrectangle(body.x * SIZE, body.y * SIZE, (body.x + 1) * SIZE, (body.y + 1) * SIZE);
	}
	Sleep(delay);
	
}
void isOver(std::deque<Snake>& snake) {
	for (auto iter = snake.begin() + 1; iter != snake.end(); ++iter) {
		if ((snake.front().x == iter->x && snake.front().y == iter->y) ||
			(snake.front().x<0 || snake.front().x>=WIDTH / SIZE) ||
			(snake.front().y<0 || snake.front().y>=LENGTH / SIZE)){
			settextcolor(RED);
			settextstyle(100, 0, _T("Consolas"));
			TCHAR endstr[16];
			_stprintf_s(endstr, _T("game over"));
			outtextxy(WIDTH / SIZE, LENGTH / SIZE, endstr);
			Sleep(3000);
			closegraph();
			exit(0);
		}
	}
}
void movesnake(std::deque<Snake>& snake,bool grow=false) {
	Snake newhead = snake.front();
	switch (newhead.dir)
	{
	case UP:
		newhead.y--;
		break;
	case DOWM:
		newhead.y++;
		break;
	case LEFT:
		newhead.x--;
		break;
	case RIGHT:
		newhead.x++;
		break;
	}
	snake.push_front(newhead);
	isOver(snake);
	if (!grow) {
		clearrectangle(snake.back().x * SIZE, snake.back().y * SIZE, (snake.back().x + 1) * SIZE, (snake.back().y + 1) * SIZE);
		snake.pop_back();
	}
	drawSnake(snake);
}
void changeDirection(std::deque<Snake>&snake) {
	ExMessage msg = { 0 };
	peekmessage(&msg, EX_KEY);
	if (msg.message = WM_KEYDOWN)
	{
		switch (msg.vkcode)
		{
		case VK_UP:
		case 'W':
		case 'w':
			if (snake.front().dir!=DOWM)
				snake.front().dir=UP;
			break;
		case VK_DOWN:
		case 'S':
		case 's':
			if (snake.front().dir != UP)
				snake.front().dir = DOWM;
			break;
		case VK_LEFT:
		case 'A':
		case 'a':
			if (snake.front().dir != RIGHT)
				snake.front().dir = LEFT;
			break;
		case VK_RIGHT:
		case 'D':
		case 'd':
			if (snake.front().dir != LEFT)
				snake.front().dir = RIGHT;
			break;
		}
	}
	
}
void generatefood(Food &food, std::deque<Snake>& snake) {
	while (true) {
		food.x = rand() % (WIDTH / SIZE);
		food.y = rand() % (LENGTH / SIZE);
		bool overlap = false;
		for (const auto& body : snake) {
			if (food.x == body.x && food.y == body.y)
			{
				overlap = true;
				break;
			}
		}
		if (!overlap)
			break;
	}
}
bool checkCollison(Food& food, std::deque<Snake>& snake) {
	if (snake.front().x == food.x && snake.front().y == food.y)
	{
		return true;
	}
	else
		return false;
}
int main()
{
	//设置边框
	initgraph(WIDTH, LENGTH);
	//设计蛇
	std::deque<Snake> snake;
	snake.push_back({WIDTH / SIZE / 2, LENGTH / SIZE / 2,RIGHT});
	Food food;
	generatefood(food, snake);
	setfillcolor(RED);
	fillrectangle(food.x * SIZE, food.y * SIZE, (food.x + 1) * SIZE, (food.y + 1) * SIZE);
	
	drawSnake(snake);
	int score = 0;
	while (true) {
		movesnake(snake);
		changeDirection(snake);
		if (checkCollison(food,snake))
		{
			score++;
			generatefood(food, snake);
			movesnake(snake, true);
		}
		setfillcolor(RED);
		fillrectangle(food.x * SIZE, food.y * SIZE, (food.x + 1) * SIZE, (food.y + 1) * SIZE);
		settextcolor(YELLOW);
		settextstyle(20, 0, _T("consele"));
		TCHAR strscore[16];
		_stprintf_s(strscore, _T("score:%d"),score);
		outtextxy(10, 10, strscore);
	}
	system("pause");
	closegraph();
	return 0;
}