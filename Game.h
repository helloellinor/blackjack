#ifndef GAME_H
#define GAME_H

class Game {
public:
	std::vector<Player> players;
	Pile deck;
	void new_game();
};

#endif //GAME_H
