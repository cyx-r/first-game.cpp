#include "enemy.h"
#include <string>
#include <BearLibTerminal.h>
#include <Windows.h>

Enemy::Enemy() {
	this->Ex = 15;
	this->Ey = 15;
	this->model = "&";
	this->direction = 'r';
}
Enemy::Enemy(int x, int y, std::string m) {
	this->Ex = x;
	this->Ey = y;
	this->model = m;
	this->direction = 'r';
}
int Enemy:: get_y() {
	return this->Ey;
}
int Enemy::get_x() {
	return this->Ex;
}
void Enemy::movement() {
	if(this->direction == 'r') {
		if (this->Ex < 50) {
			this->Ex++;
		}
		else {
			this->direction = 'l';
		}
	}
	if(this->direction == 'l') {
		if (this->Ex > 5) {
			this->Ex--;
		}
		else {
			this->direction = 'r';
		}
	}
}
void Enemy::render() {
	terminal_printf(Ex, Ey, model.c_str());
}