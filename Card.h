#ifndef CARD_H
#define CARD_H

class Card {
public:
	enum Suit {
	Spades,
	Hearts,
	Diamonds,
	Clubs
	};

	Suit suit;
	int value;
	bool visible;
	Card(Suit s, int val)
		:suit(s), value(val), visible(true) { }
	Card(Suit s, int val, bool vis)
		:suit(s), value(val), visible(vis) { }
	void print_card(bool reveal);
};

#endif //CARD_H
