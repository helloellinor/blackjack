#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <random>
#include "Card.h"
#include "Pile.h"
#include "Player.h"
#include "Game.h"

bool Game::yes_or_no() {
	std::cout << "(y/n)\n> ";
	char x;
	std::cin >> x;
	switch(x) {
		case 'y':
			return true;
		case 'n':
			return false;
		default:
			std::cout << 
				"Why'd you have to do me dirty like that, buddypal?\n";
			return false;
	}
}

void Game::add_player() {
	std::cout << "Add new player? ";
	if (yes_or_no()) {
		Player new_player;
		std::cout << "Human? ";
		if (yes_or_no()) {
			std::cout << "Screen name?\n> ";
			std::string x;
			std::cin >> x;
			new_player.screen_name = x;
		}
		else {
			std::string cpu = "CPU";
			new_player.screen_name = 
				cpu.append(std::to_string(players.size())); 
		}
		new_player.greet();
		players.push_back(new_player);
		add_player();
	}
}

void discard() {
	
}

void Game::deal(int index, int quantity) {
	for (int i = 0; i < quantity; ++i) {
		players[index].give_card(deck.contents.back());
		deck.contents.pop_back();	
	}
}

bool check_win(Pile& hand) {
 return true;
}
void Game::round() {
	
}
