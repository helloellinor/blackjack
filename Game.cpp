#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <random>
#include "Card.h"
#include "Pile.h"
#include "Player.h"
#include "Game.h"

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
		players[j].is_human = true;
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
	deck.create_deck();
	deck.shuffle_pile();
}

void Game::deal() {
	for (int i = 0; i < players.size(); ++i) {
		if (players[i].hit) {
			players[i].give_card(deck.cards.back());
			deck.cards.pop_back();	
		}
	}
}


