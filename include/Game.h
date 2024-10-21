/**
 * @author
 * @date
 */

#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED

#include "Player.h"
#include "Area.h"

/**
 * @class
 * @brief
 */
class Game {
    public:

    /**
     * @brief
     * @details
     */
    Game(const std::string& name);

    /**
     * @brief Destructor
     */
    virtual ~Game();

    /**
     * @brief
     * @details
     */
    void playRoom(Area& room);

    void play();

    private:
    Player* player;
    Area* area1;
    Area* area2;
    Area* area3;
    Area* area4;
    //Grid* grid;
};

#endif //GAME_H_INCLUDED
