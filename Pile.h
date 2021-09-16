#ifndef PILE_H
#define PILE_H

class Pile {
public:
	std::vector<Card> cards;	
	Card newCard;
	int total_value;
	void create_deck();
	void shuffle_pile();
	void print_pile(bool show_all);
};

#endif //PILE_H
