#include <iostream>
#include <vector>
#include <string>

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

class Pile {
public:
	std::vector<Card> cards;	
	Card newCard;
	void create_deck(){
		for (int i = 0; i <= 3; ++i) {
			for (int j = 1; j <=13; ++j) {
				newCard.suit = Card::Suit(i); //casting
				newCard.value = j;
				cards.push_back(newCard);
			}
		}
	}
	void shuffle_deck() {
	}
};

class Player {
public:
	std::string screen_name;
	int balance;
	Pile hand;
	Player()
		: screen_name("Unknown"), balance(100) {}
	void set_screen_name(std::string n) {
		screen_name = n;
	}
	void greet() {	
		std::cout << "Hello " << screen_name << ".\n";
	}
	void print_balance() {
		std::cout << "Your balance is " << balance << ".\n";
	}
};

int main() {
	std::cout << "Welcome to Blackjack.\n" <<
	"Please type your name to begin.\n> ";
	Player human;
	std::string x;
	std::cin >> x;
	human.set_screen_name(x);
	human.greet();
	human.print_balance();
	
	Player cpu;
	cpu.set_screen_name("CPU");
	cpu.greet();
	cpu.print_balance();

	Pile deck;
	deck.create_deck();
	return 0;
}
