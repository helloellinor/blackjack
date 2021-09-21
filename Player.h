#ifndef PLAYER_H
#define PLAYER_H

class Player {
public:
	std::string screen_name;
	int balance;
	Pile hand;
	bool is_human;
	Player();
	void greet();
	void print_balance();
	void give_card(Card card);
};

#endif //PLAYER_H
