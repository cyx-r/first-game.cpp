#pragma once
#include <vector>
#include <string>
#include "Game_object.h"

class Level {
public:
	Level();
	Level(int w,int  h);
	void render();
private:
	int width, height;
	std::vector <Game_object*> objs;

};