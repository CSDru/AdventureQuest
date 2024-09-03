//
// Created by Dru on 9/2/2024.
//

#ifndef ADVENTUREQUEST_ADVENTURE_H
#define ADVENTUREQUEST_ADVENTURE_H


#include "Player.h"

class Adventure {
private:
    Player player;
    bool explore();

public:
    void start();
};


#endif //ADVENTUREQUEST_ADVENTURE_H
