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
	
void Pile::print_pile(bool show_all) {
	for (auto i = 0; i < cards.size(); ++i) {
		std::cout << "Your hand: ";
		if (cards[i].visible || show_all) { 
			if (cards[i].value <= 10)
				std::cout << cards[i].value;
			else {
				switch (cards[i].value) {
					case 11:
						std::cout << 'J';
						break;
					case 12:
						std::cout << 'Q';
						break;
					case 13:
						std::cout << 'K';
						break;
					case 14:
						std::cout << 'A';
						break;
				}
			}
			switch (cards[i].suit) {
				case 0:
					std::cout << 'S';
					break;
				case 1:
					std::cout << 'H';
					break;
				case 2:
					std::cout << 'C';
					break;
				case 3:
					std::cout << 'D';
					break;
				
			}
		}
		else
			std::cout << "??";
		if (i + 1 != cards.size())
			std::cout << ", ";
	}
}
