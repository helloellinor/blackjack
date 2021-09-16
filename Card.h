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
};

#endif //CARD_H
