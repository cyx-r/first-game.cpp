#pragma once
#include <string>
class Enemy {
public:
	Enemy();
	Enemy(int x, int y, std::string m);
	int get_x();
	int get_y();
	void movement();
	void render();
private:
	int Ex;
	int Ey;
	char direction;
	std::string model;
};