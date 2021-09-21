#ifndef GAME_H
#define GAME_H

class Game {
public:
	std::vector<Player> players;
	Pile deck;
	Pile discard;
	bool yes_or_no();
	void new_game();
	void add_player();
	void deal();
	void round();
};

#endif //GAME_H
