/**
 * @author
 * @date
 */

#include <string>
#include <iostream>
#include <cctype>

#include "Player.h"

Player::Player(std::string name, int startHP) 
: name(name), hp(startHP), x(0), y(0) {

}

Player::~Player() {}

void Player::move(std::string direction) {
    //Convert input into lower case, so case sensitive doesn't matter (no case sensitive)
    for (std::string::iterator i = direction.begin(); i < direction.end(); ++i) {
        *i = tolower(*i);
    }
    if (direction == "exit") {
        std::cout << "Thanks for playing!" << std::endl;
        exit(0);
    } else if (direction == "help") {
        std::cout << "Commands:\nUp: Move up by one.\nDown: Move down by one.";
    } else if (direction == "up") {
        if (y > 0) {
            y--;
        } else {
            std::cout << "Cannot go pass the boundaries" << std::endl;
            return;
        }
    } else if (direction == "down") {
        if (y < 1) {
            y++;
        } else {
            std::cout << "Cannot go pass the boundaries" << std::endl;
            return;
        }
    } else if (direction == "left") {
        if (x > 0) {
            x--;
        } else {
            std::cout << "Cannot go pass the boundaries" << std::endl;
            return;
        }
    } else if (direction == "right") {
        if (x < 1) {
            x++;
        } else {
            std::cout << "Cannot go pass the boundaries" << std::endl;
            return;
        }
    } else if (direction == "position") {
        std::cout << "Current position: x: " << x << " y: " << y << std::endl;
        return;
    } else {
        std::cout << "Invalid direction command" << std::endl;
        return;
    }
    std::cout << "Current position: x: " << x << " y: " << y << std::endl;
}

void Player::resetPos() {
    x = 0;
    y = 0;
}

int Player::getX() {
    return x;
}

int Player::getY() {
    return y;
}

/*Player::Player(std::string name, int startHP) : name(name), hp(startHP) {}

Player::~Player() {
    std::cout << name << "[Player] is exiting the game." << std::endl;
}

void Player::move(std::string direction) {
    std::cout << "You have moved to " << direction << std::endl;
}

void Player::talkTo(Npc character) {
    std::cout << "You started talking to " << character.name() << std::endl;
}

void Player::attack(Npc character) {
    std::cout << "You attacked " << character.name() << std::endl;
    character.lowerHP(10);
}

void Player::pickUp(Item item) {
    std::cout << "You picked up a " << item << std::endl;
    inventory->addItem(item);
}

void Player::drop(Item item) {
    std::cout << "You dropped a " << item << std::endl;
    inventory->removeItem(item);
}

void Player::raiseHP(int amount) {
    hp += amount;
    std::cout << "You gained " << amount << " health" << std::endl;
}

void Player::lowerHP(int amount) {
    hp -= amount;
    if (hp <= 0) {
        hp = 0;
        std::cout << "You lost.";
    } else {
        std::cout << "You have lost " << amount << " health" << std::endl;
    }
}

void Player::displayHP() {
    std::cout << "Health: " << hp << std::endl;
}*/
