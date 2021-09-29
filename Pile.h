#ifndef PILE_H
#define PILE_H

class Pile {
public:
	std::vector<Card> contents;	
	void create_deck();
	void shuffle_pile();
	void print_pile(bool reveal);
};

#endif //PILE_H
