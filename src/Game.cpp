/**
 * @author
 * @date
 */

#include "Game.h"
#include <iostream>

Game::Game(const std::string& name) {
    player = new Player(name, 100);
    area1 = new Area("Room 1");
    area2 = new Area("Room 2");
    area3 = new Area("Room 3");
    area4 = new Area("Room 4");
}

Game::~Game() {
    delete player;
    delete area1;
    delete area2;
    delete area3;
    delete area4;
}

void Game::playRoom(Area& area) {
    std::string direction;

    while (true) {
        std::cout << "Enter a direction (up, down, left, right): ";
        std::getline(std::cin, direction);

        player->move(direction);

        if (player->getX() == 1 && player->getY() == 1) {
            player->resetPos();
            break;
        }
    }
}

void Game::play() {
    std::cout << "Welcome " << player->name << ", [insert plot/story of game], you can exit the game by typing 'exit'" << std::endl;

    area1->enter(*player);
    playRoom(*area1);

    std::cout << "You entered the next room" << std::endl;
    area2->enter(*player);
    playRoom(*area2);

    std::cout << "You entered the next room" << std::endl;
    area3->enter(*player);
    playRoom(*area3);

    std::cout << "You entered the next room" << std::endl;
    std::cout << "This is the last room (room 4), beat the final boss to win the game." << std::endl;
    area4->enter(*player);
    playRoom(*area4);

    std::cout << "Congratulations for winning the game!" << std::endl;
}