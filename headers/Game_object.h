#pragma once
#include <string>
class Game_object {
public:
	Game_object();
	Game_object(int x, int y, std::string m);
	void render();
private:
	std::string model;
	int Gx, Gy;
	bool vision;
};