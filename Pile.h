#ifndef PILE_H
#define PILE_H

class Pile {
public:
	std::vector<Card> cards;	
	Card newCard;
	void create_deck();
	void shuffle_pile();
	void print_pile();
};

#endif //PILE_H
