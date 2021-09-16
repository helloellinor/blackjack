#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include "Card.h"
#include "Pile.h"

void Pile::create_deck(){
	for (int i = 0; i <= 3; ++i)
		for (int j = 1; j <=13; ++j) {
			newCard.suit = Card::Suit(i); //casting
			newCard.value = j;
			cards.push_back(newCard);
		}	
}
	
void Pile::shuffle_pile() {
		std::shuffle(cards.begin(), cards.end(), std::random_device());
}
	
void Pile::print_pile() {
	for (auto i = 0; i < cards.size(); ++i)
		std::cout << "Suit: " << cards[i].suit 
		<< " Val: " << cards[i].value << '\n';
}
