#include "Game.h"

int main() {
    std::string playerName;
    std::cout << "Enter name: ";
    std::getline(std::cin, playerName);

    Game game(playerName);
    game.play();

    return 0;
}