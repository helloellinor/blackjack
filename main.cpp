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
	Game game;
	game.deck.create_deck();
	game.deck.print_pile(true);	
	return 0;
}
