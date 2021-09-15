#include <iostream>
#include <vector>
#include <string>

class Card {
public:
	enum class Suit {
		Spades,
		Hearts,
		Diamonds,
		Clubs
	};
	int value;
	bool visible;
};

class Pile {
public:
	std::vector<Card> pile;	
};

class Player {
public:
	std::string screen_name;
	int balance;
	//Pile hand;
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
	return 0;
}
