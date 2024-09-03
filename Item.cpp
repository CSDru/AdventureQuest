//
// Created by Dru on 9/2/2024.
//

#include "Item.h"

Item::Item(const std::string& itemName) : name(itemName) {}

std::ostream& operator <<(std::ostream& os, const Item& item)
{
    os << item.name;
    return os;
}