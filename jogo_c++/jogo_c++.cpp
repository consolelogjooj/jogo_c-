#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <map>
#include <string>
#include <cstdlib>  // system("cls")

#define ANSI_COLOR_BLUE   "\x1b[34m"
#define ANSI_COLOR_YELLOW "\x1b[33m"
#define ANSI_COLOR_RED    "\x1b[31m"
#define ANSI_COLOR_RESET  "\x1b[0m"


using namespace std;

const int WIDTH = 20;
const int HEIGHT = 10;

int playerX = WIDTH / 2;
int playerY = HEIGHT / 2;

int score = 0;

void drawMap() {
	system("cls");

	for (int y = 0; y < HEIGHT; ++y) {
		for (int x = 0; x < WIDTH; ++x) {
			if (x == playerX && y == playerY) {
				cout << ANSI_COLOR_BLUE << "A" << ANSI_COLOR_RESET;
			}
			else if ((x == WIDTH / 4 || x == 3 * WIDTH / 4) && (y == HEIGHT / 2)) {
				cout << ANSI_COLOR_RED << " X " << ANSI_COLOR_RESET;
			}
			else {
				cout << " . ";
			}

		}
		cout << endl;
	}
	cout << " pontuação : " << score << endl;
}

void main() {
	char input;

	while (true) {
		drawMap();
		input = _getch();

		switch (input) {
		case 'w':
			if (playerY > 0)playerY--;
			break;

		case 'a':
			if (playerX > 0)playerX--;
			break;

		case 's':
			if (playerY < HEIGHT - 1)playerY++;
			break;

		case 'd':
			if (playerX < WIDTH - 1)playerX++;
			break;

		case'q':
			return;
		}
		if ((playerX == WIDTH / 4 || playerX == 3 * WIDTH / 4) && (playerY == HEIGHT / 2)) {
			score += 10;
		}
	}
}




















/*
using namespace std;

const int WIDTH = 20;
const int HEIGHT = 10;

int  playerX = WIDTH / 2;
int  playerY = HEIGHT / 2;

int score = 0;

void drawMap() {
	system("slc");

	for (int y = 0; y < HEIGHT; ++y) {
		for (int x = 0; x < WIDTH; ++x) {
			if (x == playerX && y == playerY) {
				cout << "A";
			}
			else if ((x == WIDTH / 4 || x == 3 * WIDTH / 4) && (y == HEIGHT / 2)) {
				cout << "X";
			}
			else {
				cout << ".";
			}
		}
		cout << endl;
	}
	cout << "pontuação : " << score << endl;
}
int main() {
	char input;

	while (true) {
		drawMap();

		input = _getch();

		switch (input) {
		case 'w':
			if (playerY > 0)  playerY--;
			break;

		case 'a':
			if (playerX > 0) playerX--;
			break;

		case 's':
			if (playerY < HEIGHT - 1) playerY++;
			break;

		case 'd':
			if (playerX < WIDTH - 1)playerX++;
			break;

		case 'q':
			return 0;

		default:
			break;

		}
		if ((playerX == WIDTH / 4 || playerX == 3 * WIDTH / 4) && (playerY == HEIGHT / 2)) {
			score += 10;
		}

	}
}





#include <iostream>
#include <stdlib.h>
#include <string>
#include <cmath>
#include <iomanip>
#include <map>
#include <vector>
#include < conio.h>

using namespace std;

#define ANSI_COLOR_BLUE   "\x1b[36m"
#define ANSI_COLOR_YELLOW "\x1b[31m"
#define ANSI_COLOR_RED    "\x1b[31m"
#define ANSI_COLOR_RESET   "\x1b[0m"
#define ANSI_COLOR_GREEN   "\x1b[35m"

const int WIDTH = 20;
const int HEIGHT = 10;

int playerX = WIDTH / 2;
int playerY = HEIGHT / 2;

int score = 0;

void drawnMap() {
	system("cls");

	for (int y = 0; y < HEIGHT; ++y) {
		for (int x = 0; x < WIDTH; ++x) {
			if (x == playerX && y == playerY) {
				cout << ANSI_COLOR_BLUE << "A" << ANSI_COLOR_RESET;
			}
			else if ((x == WIDTH / 4 || x == 3 * WIDTH / 4) && (y == HEIGHT / 2)) {
				cout << ANSI_COLOR_RED << " X " << ANSI_COLOR_RESET;
			}
			else {
				cout << ANSI_COLOR_GREEN << "." << ANSI_COLOR_RESET;
			}
		}cout << endl;
	}
	cout << ANSI_COLOR_RED << "descricao : " << score << endl;
}

int main() {
	char input;

	while (true) {
		drawnMap();

		input = _getch();

		switch (input) {

		case 'w':
			if (playerY > 0)playerY--;
			break;

		case 'a':
			if (playerX > 0)playerX--;
			break;

		case 's':
			if (playerY < HEIGHT - 1)playerY++;
			break;

		case 'd':
			if (playerX < WIDTH - 1)playerX++;
			break;

		case 'q':
			return 0;

		default:
			break;
		}

		if ((playerX == WIDTH / 4 || playerX == 3 * WIDTH / 4) && (playerY == HEIGHT / 2)) {
			score += 10;

		}
	}
}


*/