#include "Player.h"
#include <BearLibterminal.h>



Player::Player() {
	Px = 0;
	Py = 0;
	nickname = "unnamed";
}
Player::Player(int x, int y, std::string n) {
	Px = x;
	Py = y;
	nickname = n;
}
void Player::render() {
	terminal_print(Px, Py, nickname.c_str());
}

void Player::movement(int c) {

	switch (c) {
	case TK_W:
		terminal_print(Px, Py, " ");
		Py--;
		 break;
	case TK_S:
		terminal_print(Px, Py, " ");
		Py++;
		 break;
	case TK_A:
		terminal_print(Px, Py, " ");
		Px--;
		 break;
	case TK_D:
		terminal_print(Px, Py, " ");
		Px++;
		 break;
	}
}
int Player::get_x() {
	return this->Px;
}
int Player::get_y() {
	return this->Py;
}