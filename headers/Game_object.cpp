#include "Game_object.h"
#include <BearLibTerminal.h>

Game_object::Game_object() {
	this->Gx = 0;
	this->Gy = 0;
	this->model = ".";
	this->vision = true;
}
Game_object::Game_object(int x, int y, std::string m) {
	this->Gx = x;
	this->Gy = y;
	this->model = m;
	vision = true;
}
void Game_object::render() {
	if (vision = true) 
	terminal_print(Gx, Gy, model.c_str());
}