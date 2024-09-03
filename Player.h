//
// Created by Dru on 9/2/2024.
//

#ifndef ADVENTUREQUEST_PLAYER_H
#define ADVENTUREQUEST_PLAYER_H


#include "Item.h"
#include <stack>

class Player{
private:
    std::stack<Item> inventory;

public:
    void pickUpItem(const Item& item);
    void dropItem();
    void showInventory() const;
    Player& operator+(const Item& item);
};


#endif //ADVENTUREQUEST_PLAYER_H
