#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include "Card.h"
#include "Pile.h"

void Pile::create_deck() {
	for (int i = 0; i <= 3; ++i)
		for (int j = 1; j <=13; ++j) {
			Card new_card(Card::Suit(i), j); //casting, j
			contents.push_back(new_card);
		}	
}
	
void Pile::shuffle_pile() {
	std::shuffle(contents.begin(), contents.end(), std::random_device());
}
	
void Pile::print_pile(bool reveal) {
	std::cout << "Your hand: ";
	for (int i = 0; i < contents.size(); ++i) {
		contents[i].print_card(reveal);
		if (i + 1 != contents.size())
			std::cout << ", ";
	}
	std::cout << '\n';
}
