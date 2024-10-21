/**
 * @author
 * @date
 */

#include <string>
#include <iostream>

#include "Area.h"
#include "Player.h"

Area::Area(const std::string& name, bool isLastRoom) 
: name(name), lastRoom(isLastRoom) {}

Area::~Area() {}

void Area::enter(Player& player) {
    std::cout << "Entering room: " << name << std::endl;
    std::cout << "New room current position: x: " << player.getX() << " y: " << player.getY() << std::endl;
}

bool Area::last() const {
    return lastRoom;
}

std::string Area::getName() const {
    return name;
}
