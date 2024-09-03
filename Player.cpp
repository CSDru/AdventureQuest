//
// Created by Dru on 9/2/2024.
//

#include "Player.h"

void Player::pickUpItem(const Item &item)
{
    inventory.push(item);
    std::cout << "You picked up: " << item << std::endl;
}

void Player::dropItem()
{
    if (!inventory.empty()) {
        Item topItem = inventory.top();
        inventory.pop();
        std::cout << "You dropped: " << topItem << std::endl;
    } else
        std::cout << "Cuh you BROKE HAHAHA! You gotta pick up summ b4 you can drop summ!" << std::endl;
}

void Player::showInventory() const
{
        if(inventory.empty())
            std::cout << "Cuh you dunn got ZE-RO assets to yo name! Quit that broke life, and go get you summ!" << std::endl;
        else
        {
            std::cout << "Your inventory contains:" << std::endl;
            std::stack<Item> tempInventory = inventory;
            while (!tempInventory.empty())
            {
                std::cout << "- " << tempInventory.top() << std::endl;
                tempInventory.pop();
            }
        }
}

Player &Player::operator+(const Item &item)
{
    pickUpItem(item);
    return *this;
}
