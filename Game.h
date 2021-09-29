#ifndef GAME_H
#define GAME_H

class Game {
public:
	std::vector<Player> players;
	Pile deck;
	Pile discard_pile;
	bool yes_or_no();
	void add_player();
	void discard();
	void deal(int index, int quantity);
	bool check_win(Pile& hand);
	void round();
};

#endif //GAME_H
