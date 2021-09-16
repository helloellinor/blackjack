#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <random>
#include "Card.h"
#include "Pile.h"
#include "Player.h"
#include "Game.h"

int main() {
	Game thisGame;
	thisGame.new_game();

	Pile deck;
	deck.create_deck();
	deck.shuffle_pile();
	return 0;
}
