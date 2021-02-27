#include "Level.h"
#include <BearLibTerminal.h>
Level::Level() {
	this->width = 80;
	this->height = 25;
	for (int i = 0; i < width; i++) {
		for (int j = 0; j < height; j++) {
			objs.push_back(new Game_object(i, j, "."));
		}
	}
}
Level::Level(int w, int h) {
	width = w;
	height = h;
	for (int i = 0; i < width; i++) {
		for (int j = 0; j < height; j++) {
			objs.push_back(new Game_object(i, j, " "));
		}
	}
}
void Level::render() {
	for (int i = 0; i < objs.size(); i++) {
		objs[i]->render();
	}
}