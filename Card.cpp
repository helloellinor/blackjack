#include <iostream>
#include "Card.h"

void Card::print_card(bool reveal) {
	if (visible || reveal) {
		if (value <= 10)
			std::cout << value;
		else {
			switch (value) {
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
		switch (suit) {
			case Suit::Spades:
				std::cout << 'S';
				break;
			case Suit::Hearts:
				std::cout << 'H';
				break;
			case Suit::Clubs:
				std::cout << 'C';
				break;
			case Suit::Diamonds:
				std::cout << 'D';
				break;
		}
	}	
	else
		std::cout << "??";
}
