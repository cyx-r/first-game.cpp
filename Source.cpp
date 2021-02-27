#include "Player.h"
#include <BearLibTerminal.h>
#include "enemy.h"
#include "Level.h"
#include "Game_object.h"

int main() {
	terminal_open();
	Player player(40, 13, "@");
	Enemy en(10, 10, "S");
	Level level(80,20);
	bool game = true;
	int move;
	while (game) {
		terminal_clear();
		level.render();
		player.render();
		en.render();
		en.movement();
		if (terminal_has_input()) {
			move = terminal_read();
			player.movement(move);
			if (move == TK_Q) {
				game = false;
			}
			if (player.get_x() == en.get_x() || player.get_y() == player.get_y()) {
				move = TK_Q;
			}
		}
		terminal_refresh();
	}
	terminal_close();
	return 0;
}