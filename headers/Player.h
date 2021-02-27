#pragma once
#include <string>
class Player {
	public:
		Player();
		Player(int x, int y, std::string n);
		void movement(int c);
		void render();
		int get_x();
		int get_y();
	private:
		int Px;
		int Py;
		std::string nickname;
		std::string model = "$";
};