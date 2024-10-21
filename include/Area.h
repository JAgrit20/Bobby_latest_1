/**
 * @author Areeb
 * @date
 * @copyright [2024] <Owner>
 */

#ifndef AREA_H_INCLUDED
#define AREA_H_INCLUDED

#include <string>
#include <iostream>

#include "Player.h"

/**
 * @class
 * @brief
 */
class Area {
 public:
  /**
   * @brief
   * @details
   */
  Area(const std::string& name, bool isLastRoom = false);
  /**
   * @brief Destructor
   */
  virtual ~Area();
  /**
   * @brief
   * @details
   */
  void enter(Player& player);
  
  bool last() const;
  
  std::string getName() const;
 private:
  std::string name;
  bool lastRoom;
};

#endif //AREA_H_INCLUDED
