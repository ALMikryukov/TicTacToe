#include<iostream>
char board[3][3];
using  std::cout;
using  std::cin;
#include<iostream>
void init();
void print();

bool is_draw();
bool is_win();
struct Coord
{
	int x, y;
};
Coord ask_coords();
void run() {//вызыввает пользователь чтоб начать игру
	bool is_running = true;
	char symbol = 'x';

	init();
	while (is_running) {
		print();
		Coord coord = ask_coords();
		board[coord.y][coord.x] = symbol;
		symbol = (symbol == 'x' ? '0' : 'x');
		is_running = !(is_draw() || is_win());
	}

}

void init() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			board[i][j] = ' ';
		}

	}
}
void print() {
	for (int i = 0; i < 3; i++) {
		cout << board[i][0];
		for (int j = 1; j < 3; j++) {
			cout << '|' << board[i][j];
		}
		if (i != 2)
			cout << '\n' << "-+-+-" << '\n';
	}
}


bool is_empty(Coord coord) {
	return board[coord.y][coord.x] == ' ';
}

bool is_valid(Coord coord) {
	return coord.x >= 0 && coord.x < 3 &&
		coord.y >= 0 && coord.y < 3;
}
Coord ask_coords() {
	Coord coord;
	do {
		cout << "\nEnter coordinates:\n";
		cout << "[1;3] x = ";
		cin >> coord.x;
		cout << "[1;3] y = ";
		cin >> coord.y;
		coord.x--;
		coord.y--;
	} while (!is_valid(coord) || !is_empty(coord));
	return coord;
}

bool is_draw() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (board[i][j] == ' ')
				return false;
		}
	}
	return true;
}
bool is_win() {
	for (int i = 0; i < 3; i++) {
		if (board[i][0] == board[i][1] &&
			board[i][1] == board[i][2] &&
			board[i][1] != ' ') {
			return true;
		}

	}
	for (int i = 0; i < 3; i++) {
		if (board[0][i] == board[1][i] &&
			board[1][i] == board[2][i] &&
			board[2][i] != ' ') {
			return true;
		}
	}
	return (board[0][0] == board[1][1] &&
		board[1][1] == board[2][2] &&
		board[2][2] != ' ')
		||
		(board[0][2] == board[1][1] &&
			board[1][1] == board[2][0] &&
			board[2][0] != ' ');
}