#include <iostream>
#include <vector>
#include <string>
#include "Card.h"
#include "Pile.h"
#include "Player.h"

Player::Player()
	: screen_name("Unknown"), balance(100), is_human(false), hit(true) {}

void Player::set_screen_name(std::string n) {
	screen_name = n;
}
	
void Player::greet() {
	std::cout << "Hello " << screen_name << ".\n";
}
	
void Player::print_balance() {
	std::cout << "Your balance is " << balance << ".\n";
}

void Player::give_card(Card card) {
	hand.cards.push_back(card);
}
