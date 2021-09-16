#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <random>


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
		for (int i = 0; i <= 3; ++i)
			for (int j = 1; j <=13; ++j) {
				newCard.suit = Card::Suit(i); //casting
				newCard.value = j;
				cards.push_back(newCard);
			}	
	}
	void shuffle_pile() {
		std::shuffle(cards.begin(), cards.end(), std::random_device());
	}
	void print_pile() {
		for (auto i = 0; i < cards.size(); ++i)
			std::cout << "Suit: " << cards[i].suit 
			<< " Val: " << cards[i].value << '\n';
	}
};

class Player {
public:
	std::string screen_name;
	int balance;
	Pile hand;
	bool is_human;
	Player()
		: screen_name("Unknown"), balance(100), is_human(0) {}
	void set_screen_name(std::string n) {
		screen_name = n;
	}
	void greet() {
		std::cout << "Hello " << screen_name << ".\n";
	}
	void print_balance() {
		std::cout << "Your balance is " << balance << ".\n";
	}
	void give_card(Card card){
		hand.cards.push_back(card);
	}
};

class Game {
public:
	std::vector<Player> players;
	Pile deck;
	void new_game();
};

void Game::new_game() {
	std::cout << "Welcome to Blackjack.\n" <<
	"How many human players?\n> ";	
	int human_players;
	std::cin >> human_players;
	std::string screen_name;
	Player newPlayer;
	for (int j = 0; j < human_players; ++j) {
		std::cout << "Name of human player " << j+1 << "\n> ";
		std::cin >> screen_name; 
		players.push_back(newPlayer);
		players[j].set_screen_name(screen_name);
		players[j].greet();
		players[j].print_balance();
	}
	std::cout << "How many CPUs?\n> ";
	int total_players;
	std::cin >> total_players;
	total_players += human_players;
	for (int j = human_players; j < total_players; ++j) {
		std::string cpu = "CPU";
		players.push_back(newPlayer);
		players[j].set_screen_name(
		cpu.append(std::to_string(j-human_players+1)));
		players[j].greet();
		players[j].print_balance();
	}
}

int main() {
	Game thisGame;
	thisGame.new_game();

	Pile deck;
	deck.create_deck();
	deck.shuffle_pile();
	return 0;
}
