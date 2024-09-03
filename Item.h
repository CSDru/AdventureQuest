//
// Created by Dru on 9/2/2024.
//

#ifndef ADVENTUREQUEST_ITEM_H
#define ADVENTUREQUEST_ITEM_H

#include <iostream>
#include <string>

class Item {
public:
    std::string name;

    Item(const std::string& itemName);
    friend std::ostream& operator << (std::ostream& os, const Item& item);

};


#endif //ADVENTUREQUEST_ITEM_H
