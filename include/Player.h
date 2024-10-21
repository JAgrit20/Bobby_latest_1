/**
 * @author
 * @date
 */

#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED

#include <string>

/**
 * @class
 * @brief
 */
class Player {
    public:

    /**
     * @brief
     * @details
     */
    Player(std::string name, int startHP);

    /**
     * @brief Destructor
     */
    virtual ~Player();

    void move(std::string direction);

    void resetPos();

    int getX();

    int getY();

    std::string name;

    private:
    int hp;
    int x, y;
};

#endif //PLAYER_H_INCLUDED
